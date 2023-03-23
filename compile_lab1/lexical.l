%{
struct node{
    int is_null;  // 是否为空
    char* id;  //语(词)法单元名
    char* value; //值（如果是id或type）
    int line_no;  //第一个词素的行号
    struct node* child_nodes;  //指向第一个子结点的指针，所有子结点的链表
    struct node* right_brother;  //指向右兄弟的指针
};
extern char* num2str(int num);
extern FILE* fp;
extern int has_error;
#include "syntax.tab.h"
void create_lexical_unit(char* name,char* content);
%}S
%option yylineno
digit [0-9]
letter [_a-zA-Z]
space " "
%%
int|float  {
        create_lexical_unit("TYPE",yytext);
        return TYPE;
        }
"struct"  {
        create_lexical_unit("STRUCT",yytext);
        return STRUCT;
        }
"return"  {
        create_lexical_unit("RETURN",yytext);
        return RETURN;
        }
"if"  {
        create_lexical_unit("IF",yytext);
        return IF;
        }
"else"  {
        create_lexical_unit("ELSE",yytext);
        return ELSE;
        }
"while"  {
        create_lexical_unit("WHILE",yytext);
        return WHILE;
        }
0|([1-9]{digit}{0,31})   {
        create_lexical_unit("INT",yytext);
        return INT;
        }
{digit}+\.{digit}+  {
        create_lexical_unit("FLOAT",yytext);
        return FLOAT;
        }
{letter}({letter}|{digit}){0,31}   {
        char* content = yytext;
        create_lexical_unit("ID",content);
        return ID;
        }
";"  {
        create_lexical_unit("SEMI",yytext);
        return SEMI;
        }
","  {
        create_lexical_unit("COMMA",yytext);
        return COMMA;
        }
"="  {
        create_lexical_unit("ASSIGNOP",yytext);
        return ASSIGNOP;
        }
>|<|>=|<=|==|!=  {
        create_lexical_unit("RELOP",yytext);
        return RELOP;
        }
"+"  {
        create_lexical_unit("PLUS",yytext);
        return PLUS;
        }
"-"  {
        create_lexical_unit("MINUS",yytext);
        return MINUS;
        }
"*"  {
        create_lexical_unit("STAR",yytext);
        return STAR;
        }
"/"  {
        create_lexical_unit("DIV",yytext);
        return DIV;
        }
"&&"  {
        create_lexical_unit("AND",yytext);
        return AND;
        }
"||"  {
        create_lexical_unit("OR",yytext);
        return OR;
        }
"."  {
        create_lexical_unit("DOT",yytext);
        return DOT;
        }
"!"  {
        create_lexical_unit("NOT",yytext);
        return NOT;
        }
"("  {
        create_lexical_unit("LP",yytext);
        return LP;
        }
")"  {
        create_lexical_unit("RP",yytext);
        return RP;
        }
"["  {
        create_lexical_unit("LB",yytext);
        return LB;
        }
"]"  {
        create_lexical_unit("RB",yytext);
        return RB;
        }
"{"  {
        create_lexical_unit("LC",yytext);
        return LC;
        }
"}"  {
        create_lexical_unit("RC",yytext);
        return RC;
        }
\n
{space}+
.  {
    has_error = 1;
    printf("Error type A at Line %d: Mysterious character \"%s\".\n",yylineno,yytext);
    fputs("Error type A at Line ", fp);
    fputs(num2str(yylineno), fp);
    fputs(": Mysterious character \"", fp);
    fputs(yytext, fp);
    fputs("\".\n", fp);
    }
%%
/* 设置终结符属性,也就是创建叶子节点 */
void create_lexical_unit(char* name,char* content){
    struct node* res=NULL;
    res=(struct node*)malloc(sizeof(struct node));
    res->is_null = 0;
    res->id = (char*)malloc(strlen(name)+2);
    res->value = (char*)malloc(strlen(content)+2);
    strcpy(res->id, name);
    strcpy(res->value, content);
    res->line_no = yylineno;
    res->child_nodes = NULL;
    res->right_brother = NULL;
    yylval.type_node = res;
}