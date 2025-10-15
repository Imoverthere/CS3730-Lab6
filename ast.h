/*   Abstract syntax tree code


 Header file   
 Austin Matthys
 October 2025

*/

#include<stdio.h>
#include<stdlib.h>

#ifndef AST_H
#define AST_H
extern int mydebug;

/* define the enumerated types for the AST.  THis is used to tell us what 
sort of production rule we came across */

enum ASTtype {
   A_VARDEC,
   A_DEC_LIST,
   A_FUNCTIONDEC,
   A_FUNDEC,
   A_COMPOUND,
   A_STMT_LIST,
   A_WRITE,
   A_NUM,
   A_NUMBER,
   A_TRUE,
   A_FALSE,
   A_EXPRSTAT,
   A_EXPR,
   A_VAR,
   A_IFSTMT,
   A_ALIST,
   A_CALL,
   A_ITERATION,
   A_RETURN,
   A_READ,
   A_ASSIGN,
   A_SELECT,
   A_SELECTBODY
 
	   //missing
};

enum DataTypes {
  A_INTTYPE,
   A_VOIDTYPE,
   A_BOOLEANTYPE
};

enum OPERATORS {
   A_PLUS,
   A_MINUS,
   A_TIMES,
   A_DIVIDE,
   A_AND,
   A_OR,
   A_NOT,
   A_LE,
   A_LT,
   A_GT,
   A_GE,
   A_EQ,
   A_NE
 
	   //missing
};

/* define a type AST node which will hold pointers to AST structs that will
   allow us to represent the parsed code 
*/
typedef struct ASTnodetype
{
     enum ASTtype nodetype;
     enum OPERATORS operator;
     enum DataTypes datatype;
     char * name;
     int value;
     ///.. missing
     struct ASTnodetype *s1,*s2 ; /* used for holding IF and WHILE components -- not very descriptive */
} ASTnode;


/* uses malloc to create an ASTnode and passes back the heap address of the newley created node */
ASTnode *ASTCreateNode(enum ASTtype mytype);

void PT(int howmany);


ASTnode *program; // pointer to the tree

/*  Print out the abstract syntax tree */
void ASTprint(int level,ASTnode *p);

#endif // of AST_H
