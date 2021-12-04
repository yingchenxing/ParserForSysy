%{
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "lrparser.tab.h"

enum cmp{ LES_CMP = 272, GRE_CMP, EQU_CMP, LESE_CMP, GREE_CMP, NEQU_CMP};
enum assign{ ADD_ASSIGN = 278, SUB_ASSIGN, MUL_ASSIGN, DIV_ASSIGN, REM_ASSIGN};
int lineno = 1;
%}

ID 		[a-zA-Z_][a-zA-Z_0-9]*
INTEGER [0-9]+
STRING	\"([^\"]|(\\\"))*\"
COMMENT	"//"(.*)
SYMBOL 	[,%*+-=/{}\[\]\(\){}]

Array [a-zA-Z_][a-zA-Z_0-9]*((\[)[0-9]*(\]))*

INT_DEX [1-9][0-9]*|[0]
INT_HEX [0][Xx]([1-9][0-9]*|[0])
INT_OCT [0][0-7]
FLOAT [0-9]*[.][0-9]+([eE][+-]?[0-9]*|[0])?f?

COMMA [,]
ASSIGNOP [=]
relOperator [>]|[<]|[>][=]|[<][=]|[=][=]|[!][=]
ADD [+]
SUB [-]
MUL [*]
DIV [/]
MOL [%]
AND [&][&]
OR [|][|]
DOT [.]
NOT [!]
bound_SEMI [;]
bound_LP \(
bound_RP \)
bound_LB \[
bound_RB \]
bound_LC \{
bound_RC \}


SPACE [ \n\t]
comment ("/*".*"*/")|([/][/].*)

%%
int		{yylval.sValue = strdup(yytext);return INT;}
break	{yylval.sValue = strdup(yytext);return BREAK;}
for		{yylval.sValue = strdup(yytext);return FOR;}
continue {yylval.sValue = strdup(yytext);return CONTINUE;}
const	{yylval.sValue = strdup(yytext);return CONST;}
main	{yylval.sValue = strdup(yytext);return MAIN;}
if		{yylval.sValue = strdup(yytext);return IF;}
else	{yylval.sValue = strdup(yytext);return ELSE;}
while	{yylval.sValue = strdup(yytext);return WHILE;}
return	{yylval.sValue = strdup(yytext);return RETURN;}
int 	{yylval.sValue = strdup(yytext); return INT;}
str		{yylval.sValue = strdup(yytext); return STR;}
void	{yylval.sValue = strdup(yytext); return VOID;}
print	{return PRINT;}
scan	{return SCAN;}

"<"		{yylval.iValue = LES_CMP; return CMP;}
">"		{yylval.iValue = GRE_CMP; return CMP;}
"=="	{yylval.iValue = EQU_CMP; return CMP;}
"<="	{yylval.iValue = LESE_CMP; return CMP;}
">="	{yylval.iValue = GREE_CMP; return CMP;}
"!="	{yylval.iValue = NEQU_CMP; return CMP;}

"+="	{yylval.iValue = ADD_ASSIGN; return ASSIGN;}
"-="	{yylval.iValue = SUB_ASSIGN; return ASSIGN;}
"*="	{yylval.iValue = MUL_ASSIGN; return ASSIGN;}
"/="	{yylval.iValue = DIV_ASSIGN; return ASSIGN;}
"%="	{yylval.iValue = REM_ASSIGN; return ASSIGN;}

{ID}		{yylval.sValue = strdup(yytext); return ID;}
{INTEGER}	{yylval.iValue = atoi(yytext); return NUMBER;}
{STRING}	{
			 char *tem = strdup(yytext + 1); 
			 tem[yyleng - 2] = 0;
			 yylval.sValue = strdup(tem);
			 free(tem);
			 return STRING;
			}
{SYMBOL}	{return yytext[0];}
{COMMENT}	{ /*ignore comment*/ }

[ \t]	{ /*ignore space*/ }
"\n"	++lineno;

. { fprintf(stderr, "Illegal character \'%s\' on line #%d\n", yytext, lineno); exit(1);}

%%

int yywrap()
{
	return 1;
}
