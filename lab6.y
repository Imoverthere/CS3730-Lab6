%{

/*

	Austin Matthys
	October 2025

	YACC File that takes tokens from lab6.l and parses them into grammar according to the definition of ALGOL_C


*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "ast.h"

extern int mydebug;
extern int linecount;

extern int yylex(); // Needed to get rid of implicit use of yylex

void yyerror (char * s)  /* Called by yyparse on error */
 
{
  printf ("%s on line %d\n", s, linecount);
}

%}

%start Program

%union
{
int value;
char* string;
ASTnode * node;
enum DataTypes datatype;
enum OPERATORS operator;
}

%token <value> T_NUM
%token <string> T_STRING T_ID
%token  T_INT T_VOID T_BOOLEAN T_BEGIN T_END T_IF T_THEN T_ELSE T_ENDIF T_WHILE T_DO T_RETURN T_WRITE T_LE
%token T_GE T_EQ T_NE T_AND T_OR T_TRUE T_FALSE T_NOT T_READ

%type <node> Decl DecList VarDec VarList FunDecl CompStat LocalDec StatList Statement WriteStat Factor Term AddExpr SimpleExpression Expression Var Call Args ArgList ReturnStat ReadStat AssignStat ExpressionStat SelectStat IterationStat
%type <datatype> TypeSpec 
%type <operator> AddOp MultOp RelOp

%%

Program :	DecList
				{ program = $1;
				}
				;

DecList :	Decl { $$ = ASTCreateNode(A_DEC_LIST);
		  					 $$->s1 = $1;
		  				 }
				| Decl DecList { $$ = ASTCreateNode(A_DEC_LIST);
												 $$->s1 = $1;
												 $$->s2 = $2;
		  								 }
				;

Decl :	VarDec  {$$ = $1;}
	 	 |  FunDecl {$$ = $1;}
	 	 ;

VarDec :	TypeSpec VarList ';'
					{ $$ = $2;
						ASTnode *p;
						p = $2;
						while (p!= NULL){
							p->datatype = $1;
							p = p->s1;
						} // of while
					}
	   	 ;

VarList : T_ID 
		  	{ $$ = ASTCreateNode(A_VARDEC);
		  		$$->name = $1;
		  	}
				| T_ID '[' T_NUM ']'
		  	{ $$ = ASTCreateNode(A_VARDEC);
		  		$$->name = $1;
		  		$$->value = $3;
		  	}
				| T_ID ',' VarList
		  	{ $$ = ASTCreateNode(A_VARDEC);
		  		$$->name = $1;
		  		$$->s1 = $3;
		  	}
				| T_ID '[' T_NUM ']' ',' VarList
		  	{ $$ = ASTCreateNode(A_VARDEC);
		  		$$->name = $1;
		  		$$->value = $3;
		  		$$->s1 = $6;
		  	}
				;

TypeSpec : T_INT
				 { $$ = A_INTTYPE;
		  	 }
		 		 | T_VOID
		 		 { $$ = A_VOIDTYPE;
		  	 }
		 		 | T_BOOLEAN
		 		 { $$ = A_BOOLEANTYPE;
		  	 }
		 		 ;

FunDecl : TypeSpec T_ID '(' Params ')' CompStat
				{ $$ = ASTCreateNode(A_FUNDEC);
					$$->name = $2;
					$$->datatype = $1;
					$$->s1 = NULL; // FIX Later	
					$$->s2 = $6;
				}
				;

Params : T_VOID 
	   	 | ParamList 
	   	 ;

ParamList : Param 
		  		| Param ',' ParamList
		  		;

Param : TypeSpec T_ID  {printf("found ID in PARAM->TID %s %d\n", $2, linecount);}
	  	| TypeSpec T_ID '['  ']' {printf("found ID in PARAM ->TID %s %d\n", $2, linecount);}
	  	;

CompStat : T_BEGIN LocalDec StatList T_END
				 { $$ = ASTCreateNode(A_COMPOUND);
				 	 $$->s1 = $2;
				 	 $$->s2 = $3;
				 }
		 		 ;


LocalDec : /* empty */ { $$ = NULL;}
		 		 | VarDec LocalDec
		 		 { $$ = $1;
		 		 	 $$->s2 = $2;
		 		 }
		 		 ;

StatList : /* empty */ 
				 {$$ = ASTCreateNode(A_STMT_LIST);
				 }
		 		 | Statement StatList
		 		 { $$ = ASTCreateNode(A_STMT_LIST);
				 	 $$->s1 = $1;
				 	 $$->s2 = $2;
				 }
		 		 ;

Statement : ReadStat	{ $$ = $1;}
		  		| WriteStat { $$ = $1;}
		  		| CompStat	{ $$ = $1;}
		  		| ReturnStat	{ $$ = $1;}
		  		| AssignStat	{ $$ = $1;}
		  		| ExpressionStat	{ $$ = $1;}
		  		| SelectStat	{ $$ = $1;}
		  		| IterationStat	{ $$ = $1;}
		  		;

ExpressionStat : Expression ';'
							 { $$ = ASTCreateNode(A_EXPRSTAT);
							 	 $$->s1 = $1;
							 }
			   			 | /*empty*/ ';'
			   			 { $$ = NULL;
			   			 }
			   			 ;

SelectStat : T_IF Expression T_THEN Statement T_ENDIF
					 { $$ = ASTCreateNode(A_SELECT);
						 $$->s1 = $2;
						 $$->s2 = ASTCreateNode(A_SELECTBODY);
						 $$->s2->s1 = $4;
						 $$->s2->s2 = NULL;
					 } 
		   		 | T_IF Expression T_THEN Statement T_ELSE Statement T_ENDIF
		   		 { $$ = ASTCreateNode(A_SELECT);
						 $$->s1 = $2;
						 $$->s2 = ASTCreateNode(A_SELECTBODY);
						 $$->s2->s1 = $4;
						 $$->s2->s2 = $6;
					 }
	       	 ;

IterationStat : T_WHILE Expression T_DO Statement
							{ $$ = ASTCreateNode(A_ITERATION);
								$$->s1 = $2;
								$$->s2 = $4;
					 		}
			  			;

ReturnStat : T_RETURN ';'
					 { $$ = ASTCreateNode(A_RETURN);
					 }
		   		 | T_RETURN Expression ';'
		   		 { $$ = ASTCreateNode(A_RETURN);
		   		 	 $$->s1 = $2;
					 }
		   		 ;

ReadStat : T_READ Var ';'
				 { $$ = ASTCreateNode(A_READ);
				 	 $$->s1 = $2;
				 }
		 		 ;

WriteStat : T_WRITE T_STRING ';' 
					{
						$$ = ASTCreateNode(A_WRITE);
						$$->name = $2;
					}
		  		| T_WRITE Expression ';'
		  		{ $$ = ASTCreateNode(A_WRITE);
						$$->s1 = $2;
		  		}
		  		;

AssignStat : Var '=' SimpleExpression ';'
					 { $$ = ASTCreateNode(A_ASSIGN);
					 	 $$->s1 = $1;
					 	 $$->s2 = $3;
					 }
		   		 ;

Expression : SimpleExpression 
					 { $$ = $1;
					 }
		   		 ;

Var : T_ID  
		{ $$ = ASTCreateNode(A_VAR);
			$$->name = $1;
		}
		| T_ID '[' Expression ']' 
		{ $$ = ASTCreateNode(A_VAR);
			$$->name = $1;
			$$->s1 = $3;
		}
		;

SimpleExpression : AddExpr 
								 { $$ = $1;
					 			 }
				 				 | AddExpr RelOp AddExpr
				 				 { $$ = ASTCreateNode(A_EXPR);
									 $$->s1 = $1;
									 $$->s2 = $3;
									 $$->operator = $2;
				 				 } 
				 				 ;

RelOp : T_LE { $$ = A_LE;}
	  	| '<' { $$ = A_LT;}
	  	| '>' { $$ = A_GT;}
	  	| T_GE { $$ = A_GE;}
	  	| T_EQ { $$ = A_EQ;}
	  	| T_NE { $$ = A_NE;}
	  	;

AddExpr : Term 
				{ $$ = $1;
				}
				| AddExpr AddOp Term
				{ $$ = ASTCreateNode(A_EXPR);
					$$->s1 = $1;
					$$->s2 = $3;
					$$->operator = $2;
				} 
				;

AddOp : '+' { $$ = A_PLUS;}
	  	| '-' { $$ = A_MINUS;}
	  	;

Term : Factor { $$ = $1;
		 }
	 	 | Term MultOp Factor 
	 	 { $$ = ASTCreateNode(A_EXPR);
					$$->s1 = $1;
					$$->s2 = $3;
					$$->operator = $2;
		 } 
	 	 ;

MultOp : '*' { $$ = A_TIMES;}
	   	 | '/' { $$ = A_DIVIDE;}
	   	 | T_AND { $$ = A_AND;}
	   	 | T_OR { $$ = A_OR;}
	   	 ;

Factor : '(' Expression ')'
			 { $$ = $2; 
		 	 } 
	   	 | T_NUM
	   	 { $$ = ASTCreateNode(A_NUM);
	   	 	 $$ ->value = $1;
		 	 } 
	   	 | Var
	   	 { $$ = $1;
		 	 } 
	   	 | Call
	   	 { $$ = $1;
		 	 } 
	   	 | T_TRUE
	   	 { $$ = ASTCreateNode(A_TRUE);
	   	 	 $$ ->value = 1;
		 	 } 
	   	 | T_FALSE
	   	 { $$ = ASTCreateNode(A_FALSE);
	   	 	 $$ ->value = 0;
		 	 } 
	   	 | T_NOT Factor
	   	 { $$ = ASTCreateNode(A_EXPR);
	   	 	 $$->operator = A_NOT;
	   	 	 $$->s1 = $2;
		 	 } 
	   	 ;
		
Call : T_ID '(' Args ')'
		 { $$ = ASTCreateNode(A_CALL);
		   $$->s1 = $3;
		 }
	 	 ;

Args : ArgList { $$ = $1;}
	 	 | /*empty*/ { $$ = NULL;}
	 	 ;

ArgList : Expression 
				{ $$ = ASTCreateNode(A_ALIST);
			  	$$->s1 = $1;
			  }
			  | Expression ',' ArgList
			  { $$ = ASTCreateNode(A_ALIST);
			  	$$->s1 = $1;
			  	$$->s2 = $3;
			  }
			  ;


%%

int main()
{ yyparse();
fprintf(stderr, "the input is syntactically correct\n");
// we know that variable "program" has been set to an AST

ASTprint(0,program);

}
