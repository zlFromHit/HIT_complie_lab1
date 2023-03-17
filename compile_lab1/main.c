#include <stdio.h>
#include "syntax.tab.h"

extern FILE* yyin;
extern int yylineno;
extern void yyrestart(FILE*);

int main(int argc, char** argv) {
    if(argc<=1){
        return 1;
    }
    FILE* f = fopen(argv[1], "r");
    if(!f){
        perror(argv[1]);
    }
    yylineno=1;
    yyrestart(f);
    yyparse();
    return 0;
}