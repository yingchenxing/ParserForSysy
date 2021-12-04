#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

extern int lineno;

past newAst0(char *type, char *value)
{
    past a = newAstNode();
    a->nodeType = type;
    a->value = value;
}

past newAst1(char *type, past next)
{
    if (next == NULL)
        return NULL;

    past a = newAstNode();
    a->nodeType = type;
    a->childs = next;
}

past newAst2(char *type, past next1, past next2)
{
    if (next1 == NULL || next2 == NULL)
        return NULL;

    past a = newAstNode();
    a->nodeType = type;
    a->childs = next1;
    next1->next = next2;
}

past newAst3(char *type, past next1, past next2, past next3)
{
    if (next1 == NULL || next2 == NULL || next3 == NULL)
        return NULL;

    past a = newAstNode();
    a->nodeType = type;
    a->childs = next1;
    next1->next = next2;
    next2->next = next3;
}

past newAst4(char *type, past next1, past next2, past next3, past next4)
{
    if (next1 == NULL || next2 == NULL || next3 == NULL || next4 == NULL)
        return NULL;

    past a = newAstNode();
    a->nodeType = type;
    a->childs = next1;
    next1->next = next2;
    next2->next = next3;
    next3->next = next4;
}

past newAst5(char *type, past next1, past next2, past next3, past next4, past next5)
{
    if (next1 == NULL || next2 == NULL || next3 == NULL || next4 == NULL || next5 == NULL)
        return NULL;

    past a = newAstNode();
    a->nodeType = type;
    a->childs = next1;
    next1->next = next2;
    next2->next = next3;
    next3->next = next4;
    next4->next = next5;
}

// past newChild()
// {
//     pc c = (pc)malloc(sizeof(childNode));
//     if (c == NULL)
//     {
//         printf("New Child failed.\n");
//         exit(0);
//     }
//     memset(c, 0, sizeof(childNode));
//     c->child = NULL;
//     c->next = NULL;
// }

past newAstNode()
{
    past p = (past)malloc(sizeof(ast));
    if (p == NULL)
    {
        printf("New astNode failed.\n");
        exit(0);
    }
    memset(p, 0, sizeof(ast));
    p->childs = NULL;
    p->next = NULL;
    return p;
}

// void showAst(past p, int nest)
// {
//     if (p == NULL)
//         return;

//     int i = 0;
//     for (i = 0; i < nest; i++)
//         printf("  ");

//     if (strcmp(p->nodeType, "ID") == 0)
//         printf("id: %s\n", p->str);
//     else if (strcmp(p->nodeType, "NUMBER") == 0)
//         printf("num: %d\n", p->value);
//     else if (strcmp(p->nodeType, "STRING") == 0)
//         printf("str: %s\n", p->str);
//     else if (strcmp(p->nodeType, "program") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         past t = p->l;
//         int i = 1;
//         for (; i <= p->value; i++)
//         {
//             showAst(t, nest + 1);
//             t = t->next;
//         }
//     }
//     else if (strcmp(p->nodeType, "ext_decl") == 0)
//     {
//         printf("ext_decl \n");
//         showAst(p->l, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "func_def") == 0)
//     {
//         printf("func_def \n");
//         showAst(p->l, nest + 1);
//         showAst(p->r, nest + 1);
//         showAst((past)p->str, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "decln") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         showAst(p->l, nest + 1);
//         showAst(p->r, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "init_declr_list") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         past t = p->l;
//         int i = 1;
//         for (; i <= p->value; i++)
//         {
//             showAst(t, nest + 1);
//             t = t->next;
//         }
//     }
//     else if (strcmp(p->nodeType, "declr") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         showAst(p->l, nest + 1);
//         showAst(p->r, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "intstr_list") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         past t = p->l;
//         int i = 1;
//         for (; i <= p->value; i++)
//         {
//             showAst(t, nest + 1);
//             t = t->next;
//         }
//     }
//     else if (strcmp(p->nodeType, "dir_declr") == 0)
//     {
//         showAst(p->l, 0);
//         showAst(p->r, nest);
//     }
//     else if (strcmp(p->nodeType, "para_list") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         past t = p->l;
//         int i = 1;
//         for (; i <= p->value; i++)
//         {
//             showAst(t, nest);
//             t = t->next;
//         }
//     }
//     else if (strcmp(p->nodeType, "parameter") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         showAst(p->l, nest + 1);
//         showAst(p->r, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "type") == 0)
//     {
//         printf("%s: %s\n", p->nodeType, p->str);
//     }
//     else if (strcmp(p->nodeType, "com_stmt") == 0)
//     {
//         printf("compound_statement \n");
//         showAst(p->l, nest + 1);
//         showAst(p->r, nest + 1);
//         showAst((past)p->str, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "begin_scope") == 0)
//     {
//         printf("\n");
//     }
//     else if (strcmp(p->nodeType, "end_scope") == 0)
//     {
//         printf("\n");
//     }
//     else if (strcmp(p->nodeType, "stmt_list") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         past t = p->l;
//         int i = 1;
//         for (; i <= p->value; i++)
//         {
//             showAst(t, nest);
//             t = t->next;
//         }
//     }
//     else if (strcmp(p->nodeType, "expr_stmt") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         showAst(p->l, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "if_stmt") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         showAst((past)p->str, nest + 1);
//         showAst(p->l, nest + 1);
//         showAst(p->r, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "while_stmt") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         showAst(p->l, nest + 1);
//         showAst(p->r, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "return_stmt") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         showAst(p->l, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "print_stmt") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         showAst(p->l, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "scan_stmt") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         showAst(p->l, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "assign_expr") == 0)
//     {
//         if (p->value > 258)
//         {
//             switch (p->value)
//             {
//             case 278:
//                 printf("%s +=\n", p->nodeType);
//                 break;
//             case 279:
//                 printf("%s -=\n", p->nodeType);
//                 break;
//             case 280:
//                 printf("%s *=\n", p->nodeType);
//                 break;
//             case 281:
//                 printf("%s /=\n", p->nodeType);
//                 break;
//             case 282:
//                 printf("%s %%=\n", p->nodeType);
//                 break;
//             }
//         }
//         else
//             printf("%s \n", p->nodeType);

//         showAst(p->l, nest + 1);
//         showAst(p->r, nest + 1);
//         showAst((past)p->str, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "cmp_expr") == 0)
//     {
//         switch (p->value)
//         {
//         case 272:
//             printf("%s <\n", p->nodeType);
//             break;
//         case 273:
//             printf("%s >\n", p->nodeType);
//             break;
//         case 274:
//             printf("%s ==\n", p->nodeType);
//             break;
//         case 275:
//             printf("%s <=\n", p->nodeType);
//             break;
//         case 276:
//             printf("%s >=\n", p->nodeType);
//             break;
//         case 277:
//             printf("%s !=\n", p->nodeType);
//             break;
//         }

//         showAst(p->l, nest + 1);
//         showAst(p->r, nest + 1);
//         showAst((past)p->str, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "expr") == 0)
//     {
//         printf("%s %c\n", p->nodeType, (char)p->value);
//         showAst(p->l, nest + 1);
//         showAst(p->r, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "primary_expr") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         showAst(p->l, nest + 1);
//         showAst(p->r, nest + 1);
//     }
//     else if (strcmp(p->nodeType, "expr_list") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         past t = p->l;
//         int i = 1;
//         for (; i <= p->value; i++)
//         {
//             showAst(t, nest);
//             t = t->next;
//         }
//     }
//     else if (strcmp(p->nodeType, "id_list") == 0)
//     {
//         printf("%s \n", p->nodeType);
//         past t = p->l;
//         int i = 1;
//         for (; i <= p->value; i++)
//         {
//             showAst(t, nest);
//             t = t->next;
//         }
//     }
// }
