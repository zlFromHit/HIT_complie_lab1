#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "syntax.tab.h"
extern char *right(char *dst,char *src,int n);
extern char *left(char *dst,char *src,int n);
extern FILE* yyin;
extern int yylineno;
extern void yyrestart(FILE*);
char* file_name;
int file_name_len;
FILE* fp;
int main(int argc, char** argv) {
    if(argc<=1){
        return 1;
    }
    file_name = (char*)malloc(20);
    file_name = argv[1];
    file_name_len = strlen(file_name)-5;
    FILE* f = fopen(argv[1], "r");
    if(!f){
        perror(argv[1]);
    }
    yylineno=1;
    yyrestart(f);
    char* fileName = (char*)malloc(10);
    right(fileName, file_name, file_name_len);
    char* fileName2 = (char*)malloc(7);
    left(fileName2, fileName, file_name_len-4);
    char* dir = "/home/lay/C_or_CPP/compile_lab1/output/";
    char* path = (char*)malloc(strlen(dir)+strlen(fileName2)+7);
    strcpy(path, dir);
    strcat(path, fileName2);
    strcat(path, ".output");
    fp = fopen(path, "w");
    yyparse();
    fclose(fp);
    return 0;
}