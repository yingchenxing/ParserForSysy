%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
int yylex(void);
void yyerror (char const *s);

%}

%expect 1

%union{
	int iValue;
	char *sValue;
	past pAst;
};

%token <iValue> NUMBER CMP ASSIGN
%token <sValue> ID STRING INT STR VOID
%token IF ELSE WHILE RETURN PRINT SCAN
%type  <pAst> program external_declaration function_definition declaration
	init_declarator_list init_declarator direct_declarator
	declarator initializer parameter_list parameter intstr_list type
	compound_statement begin_scope end_scope
	statement_list statement selection_statement
	iteration_statement expression_statement jump_statement
	print_statement scan_statement expr expr_list assign_expr
	add_expr mul_expr primary_expr cmp_expr id_list

%%

CompUnit
	:CompUnit Decl								{$$ = newAst2("CompUnit",$1,$2)}
	|CompUnit FuncDef							{$$ = newAst2("CompUnit",$1,$2)}
	|Decl										{$$ = newAst1("CompUnit",$1)}
	|FuncDef									{$$ = newAst1("CompUnit",$1)}
Decl
	:ConstDecl									{$$ = newAst1("Decl",$1)}
	|VarDecl									{$$ = newAst1("Decl",$1)}
ConstDecl
	:CONST BType ConstDef ';'					{$$ = newAst3("ConstDecl",$1,$2,$3)}
BType
	:INT										{$$ = newAst1("BType",$1)}
ConstDef
	:Ident '=' ConstInitVal						{$$ = newAst2("ConstDef", $1,$3)}
ConstInitVal
	:ConstExp									{$$ = newAst1("ConstInitVal",$1)}
	|'{' ConstExp '}'							{$$ = newAst1("ConstInitVal",$2)}
VarDecl
	:BType VarDecl ';'							{$$ = newAst2("VarDecl", $1,$2)}
VarDef
	:Ident										{$$ = newAst1("Ident",$1)}
	|Ident '=' InitVal;							{$$ = newAst2("Ident", $1,$3)}
InitVal
	:Exp										{$$ = newAst1("InitVal",$1)}
FuncDef
	:FuncType Ident '(' ')' Block				{$$ = newAst3("FuncDef",$1,$2,$5)}
	|FuncType Ident '(' FuncFParams ')' Block	{$$ = newAst4("FuncDef",$1,$2,$4,$6)}
FuncType
	:VOID										{$$ = newAst1("FuncType",$1)}
	|INT										{$$ = newAst1("FuncType",$1)}
FuncFParams
	:FuncFParam 								{$$ = newAst1("FuncFParams",$1)}
FuncFParam
	:BType Ident								{$$ = newAst1("FuncFParam",$1,$2)}
	|BType ',' FuncFParam						{$$ = newAst1("FuncFParam",$1,$3)}
Block
	:'{' BlockItems '}'							{$$ = newAst1("Block",$2)}
BlockItems
	:Block BlockItems							{$$ = newAst2("BlockItems",$1,$2)}
	|Block										{$$ = newAst1("BlockItems",$1)}
BlockItem
	:Decl										{$$ = newAst1("BlockItem",$1)}
	|Stmt										{$$ = newAst1("BlockItem",$1)}
Stmt
	:LVal '=' Exp ';'							{$$ = newAst2("Stmt",$1,$3)}
	|Exp ';'									{$$ = newAst1("Stmt",$1)}
	|Block										{$$ = newAst1("Stmt",$1)}
	|IF '(' Cond ')' Stmt ELSE Stmt				{$$ = newAst4("Stmt",$1,$3,$5,$6)}
	|IF '(' Cond ')' Stmt						{$$ = newAst3("Stmt",$1,$3,$5)}
	|WHILE '(' Cond ')' Stmt					{$$ = newAst3("Stmt",$1,$3,$5)}
	|BREAK ';'									{$$ = newAst1("Stmt",$1)}
	|CONTINUE ';'								{$$ = newAst1("Stmt",$1)}
	|RETURN EXP ';'								{$$ = newAst1("Stmt",$1)}
	|RETURN ';'									{$$ = newAst1("Stmt",$1)}
Exp
	:AddExp										{$$ = newAst1("Exp",$1)}
Cond
	:LOrExp										{$$ = newAst1("Cond",$1)}
LVal
	:Ident '[' Exp ']'							{$$ = newAst4("LVal",$1,$3)}
PrimaryExp
	:'(' Exp ')'								{$$ = newAst1("PrimaryExp",$2)}
	|LVal										{$$ = newAst1("PrimaryExp",$1)}
	|Number
Number
	:IntConst
	|




program
	: external_declaration						{$$ = program(NULL, $1); root = $$;}
	| program external_declaration				{$$ = program($1, $2);}
	;
external_declaration
	: function_definition						{$$ = ext_decl($1);}
	| declaration								{$$ = ext_decl($1);}
	;
function_definition
	: type declarator compound_statement		{$$ = func_def($1, $2, $3);}
	;
declaration
	: type init_declarator_list ';'				{$$ = decln($1, $2);}
	;
init_declarator_list
	: init_declarator							{$$ = init_declr_list(NULL, $1);}
	| init_declarator_list ',' init_declarator	{$$ = init_declr_list($1, $3);}
	;
init_declarator
	: declarator								{$$ = declr($1, NULL);}
	| declarator '=' add_expr					{$$ = declr($1, $3);}
	| declarator '=' '{' intstr_list '}'		{$$ = declr($1, $4);}
	;
intstr_list
	: initializer								{$$ = intstr_list(NULL, $1);}
	| intstr_list ',' initializer				{$$ = intstr_list($1, $3);}
	;
initializer
	: NUMBER									{$$ = newNUMBER($1);}
	| STRING									{$$ = newSTRING($1);}
	;
declarator
	: direct_declarator							{$$ = $1;}
	;
direct_declarator
	: ID										{$$ = dir_declr(newID($1), NULL);}
	| direct_declarator '(' parameter_list ')'	{$$ = dir_declr($1, $3);}
	| direct_declarator '(' ')'					{$$ = dir_declr($1, NULL);}
	| ID '[' expr ']'							{$$ = dir_declr(newID($1), $3);}
	| ID '[' ']'								{$$ = dir_declr(newID($1), NULL);}
	;
parameter_list
	: parameter									{$$ = para_list(NULL, $1);}
	| parameter_list ',' parameter				{$$ = para_list($1, $3);}
	;
parameter
	: type ID									{$$ = parameter($1, newID($2));}
	;
type
	: INT										{$$ = type($1);}
	| STR										{$$ = type($1);}
	| VOID										{$$ = type($1);}
	;
statement
	: compound_statement						{$$ = $1;}
	| expression_statement						{$$ = $1;}
	| selection_statement						{$$ = $1;}
	| iteration_statement						{$$ = $1;}
	| jump_statement							{$$ = $1;}
	| print_statement							{$$ = $1;}
	| scan_statement							{$$ = $1;}
	| declaration								{$$ = $1;}
	;
compound_statement
	: begin_scope end_scope						{$$ = com_stmt($1, NULL, $2);}
	| begin_scope statement_list end_scope		{$$ = com_stmt($1, $2, $3);}
	;
begin_scope
	: '{'										{$$ = begin_scope();}
	;
end_scope
	: '}'										{$$ = end_scope();}
	;
statement_list
	: statement									{$$ = stmt_list(NULL, $1);}
	| statement_list statement					{$$ = stmt_list($1, $2);}
	;
expression_statement
	: ';'										{$$ = expr_stmt(NULL);}
	| expr ';'									{$$ = expr_stmt($1);}
	;
selection_statement
	: IF '(' expr ')' statement					{$$ = if_stmt($3, $5, NULL);}
	| IF '(' expr ')' statement ELSE statement	{$$ = if_stmt($3, $5, $7);}
	;
iteration_statement
	: WHILE '(' expr ')' statement				{$$ = while_stmt($3, $5);}
	;
jump_statement
	: RETURN ';'								{$$ = return_stmt(NULL);}
	| RETURN expr ';'							{$$ = return_stmt($2);}
	;
print_statement
	: PRINT ';'									{$$ = print_stmt(NULL);}
	| PRINT expr_list ';'						{$$ = print_stmt($2);}
	;
scan_statement
	: SCAN id_list ';'							{$$ = scan_stmt($2);}
	;
expr
	: assign_expr								{$$ = $1;}
	;
assign_expr
	: cmp_expr									{$$ = $1;}
	| ID ASSIGN assign_expr						{$$ = assign_expr($2, newID($1), $3, NULL);}
	| ID '=' assign_expr						{$$ = assign_expr(-1, newID($1), $3, NULL);}
	| ID '[' expr ']' '=' assign_expr			{$$ = assign_expr(-1, newID($1), $3, $6);}
	;
cmp_expr
	: add_expr									{$$ = $1;}
	| cmp_expr CMP add_expr						{$$ = cmp_expr($1, $2, $3);}
	;
add_expr
	: mul_expr									{$$ = $1;}
	| add_expr '+' mul_expr						{$$ = newExpr($1, '+', $3);}
	| add_expr '-' mul_expr						{$$ = newExpr($1, '-', $3);}
	;
mul_expr
	: primary_expr								{$$ = $1;}
	| mul_expr '*' primary_expr					{$$ = newExpr($1, '*', $3);}
	| mul_expr '/' primary_expr					{$$ = newExpr($1, '/', $3);}
	| mul_expr '%' primary_expr					{$$ = newExpr($1, '%', $3);}
	| '-' primary_expr							{$$ = newExpr($2, '-', NULL);}
	;
primary_expr
	: ID '(' expr_list ')'						{$$ = primary_expr(newID($1), $3);}
	| ID '(' ')'								{$$ = primary_expr(newID($1), NULL);}
	| '(' expr ')'								{$$ = primary_expr(NULL, $2);}
	| ID										{$$ = newID($1);}
	| initializer								{$$ = $1;}
	| ID '[' expr ']'							{$$ = primary_expr(newID($1), $3);}
	;
expr_list
	: expr										{$$ = expr_list(NULL, $1);}
	| expr_list ',' expr						{$$ = expr_list($1, $3);}
	;
id_list
	: ID										{$$ = id_list(NULL, newID($1));}
	| id_list ',' ID							{$$ = id_list($1, newID($3));}
	;

%%

void yyerror(char const *s){
	fprintf (stderr, "%s/n", s);
} 
