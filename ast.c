/*   Abstract syntax tree code

     This code is used to define an AST node, 
    routine for printing out the AST
    defining an enumerated nodetype so we can figure out what we need to
    do with this.  The ENUM is basically going to be every non-terminal
    and terminal in our language.

    Austin Matthys
    October 2025



*/

#include<stdio.h>
#include<stdlib.h>
#include "ast.h" 


/* Uses malloc to create an ASTnode and passes back the heap address of the newley created node */
// PRE:    An AST type
// POST:   Creates an empty node with the type given
ASTnode *ASTCreateNode(enum ASTtype mytype)
{
    ASTnode *p;
    if (mydebug) fprintf(stderr,"Creating AST Node \n");
    p=(ASTnode *)malloc(sizeof(ASTnode));
    p->nodetype=mytype;
    p->s1=NULL;
    p->s2=NULL;
    p->value=0;
    return(p);
}

/*  Helper function to print tabbing */

// PRE:     Given a positive number
// POST:    Print that number of spaces
void PT(int howmany)
{
	 for(int i = 0; i < howmany; i++){
        printf(" ");
     }
}

// PRE:  A Data Type
// POST: A character string for that type to print nicely -- caller does final output

char * DataTypeToString(enum DataTypes mydatatype){
    switch (mydatatype) {
           case A_VOIDTYPE: return ("void");
                            break;
           case A_INTTYPE:  return ("int");
                            break;
           case A_BOOLEANTYPE:  return ("boolean");
                            break;
           default: printf("Unknown type in DataTypeToString\n");
                     exit(1);
      } //of switch
}// of DataTypeToString()


/* Print out the abstract syntax tree */
// PRE:  PTR to an AST tree
// POST: Print to screen formatted tree output

void ASTprint(int level,ASTnode *p)
{
   int i;
   if (p == NULL ) return;

    // when here p is not NULL
   switch (p->nodetype) {
        case A_DEC_LIST: ASTprint(level,p->s1);
                         ASTprint(level,p->s2);
                        break;

        case A_VARDEC :  PT(level);
                         printf("Variable ");
                         printf("%s ", DataTypeToString(p->datatype));
                         printf(" %s",p->name);
                         if (p->value > 0)
                            printf("[%d]",p->value);
                         printf("\n");
		                 ASTprint(level,p->s1); 
                        break;

        case A_FUNDEC :  PT(level);
                         printf("Function ");
                         printf("%s ", DataTypeToString(p->datatype));
                         printf(" %s",p->name);
                         printf("\n");
                         ASTprint(level+1,p->s1); // parameters
                         ASTprint(level+1,p->s2); // compound
                        break;

        case A_EXPR :   PT(level);
                        printf("Expression operator: ");
                        switch (p->operator){
                            case A_PLUS: printf("+\n"); break;
                            case A_MINUS: printf("-\n"); break;
                            case A_TIMES: printf("*\n"); break;
                            case A_DIVIDE: printf("/\n"); break;
                            case A_AND: printf("and\n"); break;
                            case A_OR: printf("or\n"); break;
                            case A_NOT : printf("not\n");  break;
                            case A_LE : printf("<=\n");  break;
                            case A_LT : printf("<\n");  break;
                            case A_GT : printf(">\n");  break;
                            case A_GE : printf(">=\n");  break;
                            case A_EQ : printf("==\n");  break;
                            case A_NE : printf("!=\n");  break;

                            default: printf("Unknown operator is A_EXPR ASTPRINT\n");
                                     printf("EXITING fix\n");
                                     exit(1);
                        } // Internal Switch

                        ASTprint(level+1, p->s1);
                        ASTprint(level+1, p->s2);
                        break;

        case A_COMPOUND : PT(level);
                          printf("Compound\n");
                          ASTprint(level+1,p->s1); // local vars
                          ASTprint(level+1,p->s2); // statement list
                        break;

        case A_STMT_LIST : ASTprint(level,p->s1); // local vars
                           ASTprint(level,p->s2); // statement list
                        break;

        case A_NUM :    PT(level);
                        printf("NUMBER with value %d\n", p->value);
                        break;

        case A_WRITE :  PT(level);
                        printf("WRITE ");
                        if (p->name != NULL) //is a string
                            {
                                printf("%s \n", p->name); //prints string
                            }
                        else{
                            printf("\n");
                            ASTprint(level+1,p->s1);
                            }
                        break;

        case A_READ : PT(level);
                      printf("Read:\n");
                      ASTprint(level+1,p->s1); // Var
                    break;

        case A_ASSIGN : PT(level);
                        printf("Assign:\n");
                        ASTprint(level+1,p->s1); // var
                        ASTprint(level+1,p->s2); // simple expression
                       break;

        case A_ITERATION : PT(level);
                           printf("Iterate:\n");
                           ASTprint(level+1,p->s1); // Expression
                           ASTprint(level+1,p->s2); // Statement
                         break;

        case A_VAR :    PT(level);
                        printf("Var found: %s \n", p->name); // T_ID
                        if(p->s1 != NULL){ // if there is an expression
                            ASTprint(level+1,p->s1); // print Expression
                        }
                       break;

        case A_SELECT : PT(level);
                        printf("Select:\n");
                        ASTprint(level+1,p->s1); // Expression
                        PT(level+1);
                        printf("Select body:\n");
                        ASTprint(level+2, p->s2->s1);
                        if(p->s2->s2 != NULL){
                            PT(level+1);
                            printf("Else\n");
                            ASTprint(level+2, p->s2->s2);
                        }

                      break;

        default: printf("unknown type in ASTprint %d\n", p->nodetype);
                 printf("Exiting ASTprint immediately\n");
                 exit(1);


       } // of switch
} // of ASTprint



/* dummy main program so I can compile for syntax error independently   
main()
{
}
*/
