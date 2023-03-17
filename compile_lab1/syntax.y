%{
#include "lex.yy.c"
#include "stdarg.h"
void print_point(struct node*);
void yyerror();
struct node* create_null_unit();
struct node* create_gram_unit(char* name,int num,...);
void preorder_tra(struct node* root,int depth);
int has_error = 0;

%}
%union  {
	struct node* type_node;
}
/* declared tokens */
%token <type_node> INT FLOAT
%token <type_node> ID
%token <type_node> SEMI COMMA
%token <type_node> ASSIGNOP
%token <type_node> RELOP
%token <type_node> PLUS MINUS STAR DIV
%token <type_node> AND OR
%token <type_node> DOT
%token <type_node> NOT
%token <type_node> TYPE
%token <type_node> LP RP LB RB LC RC
%token <type_node> STRUCT
%token <type_node> RETURN
%token <type_node> IF ELSE WHILE
%token error

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%left COMMA
%right ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right NOT
%left LP RP DOT LB RB

%type <type_node> Program ExtDefList ExtDef ExtDecList
%type <type_node> Specifier StructSpecifier OptTag Tag
%type <type_node> VarDec FunDec VarList ParamDec
%type <type_node> CompSt StmtList Stmt
%type <type_node> DefList Def DecList Dec
%type <type_node> Exp Args
%%

/* High-leval Definitions */
Program : ExtDefList  {int depth=0;$$ = create_gram_unit("Program",1,$1);if(has_error==0)preorder_tra($$,depth);}
  ;
ExtDefList : ExtDef ExtDefList  {$$ = create_gram_unit("ExtDefList",2,$1,$2);}
  |  {$$ = create_null_unit();}
  ;
ExtDef : Specifier ExtDecList error SEMI  {has_error = 1;}
  | Specifier error SEMI  {has_error = 1;}
  | Specifier FunDec CompSt  {$$ = create_gram_unit("ExtDef",3,$1,$2,$3);}
  | Specifier ExtDecList SEMI  {$$ = create_gram_unit("ExtDef",3,$1,$2,$3);}
  | Specifier SEMI  {$$ = create_gram_unit("ExtDef",2,$1,$2);}
  ;
ExtDecList : VarDec  {$$ = create_gram_unit("ExtDecList",1,$1);}
  | VarDec COMMA ExtDecList  {$$ = create_gram_unit("ExtDecList",3,$1,$2,$3);}
  ;
/* Specifier */
Specifier : TYPE  {$$ = create_gram_unit("Specifier",1,$1);}
  | StructSpecifier  {$$ = create_gram_unit("Specifier",1,$1);}
  ;
StructSpecifier : STRUCT OptTag LC DefList error RC  {has_error = 1;}
  | STRUCT Tag  {$$ = create_gram_unit("StructSpecifier",2,$1,$2);}
  | STRUCT OptTag LC DefList RC  {$$ = create_gram_unit("StructSpecifier",5,$1,$2,$3,$4,$5);}
  ;
OptTag : ID  {$$ = create_gram_unit("OptTag", 1, $1);}
  |  {$$ = create_null_unit();}
  ;
Tag : ID  {$$ = create_gram_unit("Tag",1,$1);}
  ;
/* Declarators */
VarDec : ID  {$$ = create_gram_unit("VarDec",1,$1);}
  | VarDec LB INT error RB  {has_error = 1;}
  | VarDec LB INT RB  {$$ = create_gram_unit("VarDec",4,$1,$2,$3,$4);}
  ;
FunDec : ID LP VarList error RP  {has_error = 1;}
  | ID LP error RP  {has_error = 1;}
  | ID LP VarList RP  {$$ = create_gram_unit("FunDec",4,$1,$2,$3,$4);}
  | ID LP RP  {$$ = create_gram_unit("FunDec",3,$1,$2,$3);}
  ;
VarList : ParamDec COMMA VarList  {$$ = create_gram_unit("VarList",3,$1,$2,$3);}
  | ParamDec  {$$ = create_gram_unit("VarList",1,$1);}
  ;
ParamDec : Specifier VarDec  {$$ = create_gram_unit("ParamDec",2,$1,$2);}
  ;
/* Statement */
CompSt : LC DefList StmtList error RC  {has_error = 1;}
  | LC DefList StmtList RC  {$$ = create_gram_unit("CompSt",4,$1,$2,$3,$4);}
  ;
StmtList : Stmt StmtList  {$$ = create_gram_unit("StmtList",2,$1,$2);}
  |  {$$ = create_null_unit();}
  ;
Stmt : Exp error SEMI  {has_error = 1;}
  | CompSt  {$$ = create_gram_unit("Stmt",1,$1);}
  | RETURN Exp error SEMI  {has_error = 1;}
  | IF LP Exp error RP Stmt %prec LOWER_THAN_ELSE  {has_error = 1;}
  | IF LP Exp error RP Stmt ELSE Stmt  {has_error = 1;}
  | WHILE LP Exp error RP Stmt  {has_error = 1;}
  | Exp SEMI  {$$ = create_gram_unit("Stmt",2,$1,$2);}
  | RETURN Exp SEMI  {$$ = create_gram_unit("Stmt",3,$1,$2,$3);}
  | IF LP Exp RP Stmt %prec LOWER_THAN_ELSE  {$$ = create_gram_unit("Stmt",5,$1,$2,$3,$4,$5);}
  | IF LP Exp RP Stmt ELSE Stmt  {$$ = create_gram_unit("Stmt",7,$1,$2,$3,$4,$5,$6,$7);}
  | WHILE LP Exp RP Stmt  {$$ = create_gram_unit("Stmt",5,$1,$2,$3,$4,$5);}
  ;
/* Local Definitions */
DefList : Def DefList  {$$ = create_gram_unit("DefList",2,$1,$2);}
  |  {$$ = create_null_unit();}
  ;
Def : Specifier DecList error SEMI  {has_error = 1;}
  | Specifier DecList SEMI  {$$ = create_gram_unit("Def",3,$1,$2,$3);}
  ;
DecList : Dec  {$$ = create_gram_unit("DecList",1,$1);}
  | Dec COMMA DecList  {$$ = create_gram_unit("DecList",3,$1,$2,$3);}
  ;
Dec : VarDec  {$$ = create_gram_unit("Dec",1,$1);}
  | VarDec ASSIGNOP Exp  {$$ = create_gram_unit("Dec",3,$1,$2,$3);}
  ;
/* Expressions */
Exp : Exp ASSIGNOP Exp  {$$ = create_gram_unit("Exp",3,$1,$2,$3);}
  | Exp AND Exp  {$$ = create_gram_unit("Exp",3,$1,$2,$3);}
  | Exp OR Exp  {$$ = create_gram_unit("Exp",3,$1,$2,$3);}
  | Exp RELOP Exp  {$$ = create_gram_unit("Exp",3,$1,$2,$3);}
  | Exp PLUS Exp  {$$ = create_gram_unit("Exp",3,$1,$2,$3);}
  | Exp MINUS Exp  {$$ = create_gram_unit("Exp",3,$1,$2,$3);}
  | Exp STAR Exp  {$$ = create_gram_unit("Exp",3,$1,$2,$3);}
  | Exp DIV Exp  {$$ = create_gram_unit("Exp",3,$1,$2,$3);}
  | LP Exp error RP  {has_error = 1;}
  | MINUS Exp  {$$ = create_gram_unit("Exp",2,$1,$2);}
  | NOT Exp  {$$ = create_gram_unit("Exp",2,$1,$2);}
  | ID LP Args error RP  {has_error = 1;}
  | ID LP error RP  {has_error = 1;}
  | Exp LB Exp error RB  {has_error = 1;}
  | Exp DOT ID  {$$ = create_gram_unit("Exp",3,$1,$2,$3);}
  | ID  {$$ = create_gram_unit("Exp",1,$1);}
  | INT  {$$ = create_gram_unit("Exp",1,$1);}
  | FLOAT  {$$ = create_gram_unit("Exp",1,$1);}
  | LP Exp RP  {$$ = create_gram_unit("Exp",3,$1,$2,$3);}
  | ID LP Args RP  {$$ = create_gram_unit("Exp",4,$1,$2,$3,$4);}
  | ID LP RP  {$$ = create_gram_unit("Exp",3,$1,$2,$3);}
  | Exp LB Exp RB  {$$ = create_gram_unit("Exp",4,$1,$2,$3,$4);}
  ;
Args : Exp COMMA Args  {$$ = create_gram_unit("Args",3,$1,$2,$3);}
  | Exp  {$$ = create_gram_unit("Args",1,$1);}
  ;
%%
void yyerror(){
    printf("Error type B at line %d: syntax error\n",yylineno);
}
/* 空产生式 */
struct node* create_null_unit(){
    struct node* res = (struct node*)malloc(sizeof(struct node));
    res->is_null = 1;
    res->id = "null";
    res->value = NULL;
    res->line_no = 0;
    res->child_nodes = NULL;
    res->right_brother = NULL;
    return res;
}
/* 创建非终结符节点 */
struct node* create_gram_unit(char* name,int num,...){
    struct node* parent = (struct node*)malloc(sizeof(struct node));
    parent->is_null = 1;
    parent->line_no = 0;
    parent->id = name;
    parent->value = NULL;
    parent->right_brother = NULL;
    va_list valist;
    va_start(valist, num);
    struct node* index = va_arg(valist, struct node*);
    struct node* first_child = index;
    if((index->is_null)==0){
        parent->is_null=0;//如果子结点有非空的那么父节点非空
        if(parent->line_no == 0)parent->line_no = index->line_no;
        //父节点首词素行号等于第一个非空节点首词素行号
    }
    for(int i=0;i<num-1;i++){
    	if((index->is_null)==0){
    	    parent->is_null=0;//如果子结点有非空的那么父节点非空
    	    if(parent->line_no == 0)parent->line_no = index->line_no;
    	    //父节点首词素行号等于第一个非空节点首词素行号
    	}
    	index->right_brother = va_arg(valist, struct node*);
    	index = index->right_brother;
    }
    parent->child_nodes = first_child;
    return parent;
}
/* 先序遍历 */
void preorder_tra(struct node* root,int depth){
    if(root==NULL)return;
    int temp = depth;
    if(strcmp(root->id,"null")!=0){
    	for(int i=0;i<temp;i++){
            printf("  ");
    	}
    	printf("%s",root->id);
    	if(strcmp(root->id,"ID")==0||strcmp(root->id,"INT")==0||strcmp(root->id,"FLOAT")==0)printf(": %s",root->value);
    	else printf(" (%d)",root->line_no);
    	printf("\n");
    }
    if(root->child_nodes){
        temp++;
        preorder_tra(root->child_nodes,temp);
        temp--;
    }
    preorder_tra(root->right_brother,temp);
}