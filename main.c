#include <stdio.h>
#include <stdlib.h>
#include "ast.h"

extern FILE *yyin;
extern int yyparse(void);

int main(int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    yyparse();
    showAst(root, 0);
    return 0;
}
