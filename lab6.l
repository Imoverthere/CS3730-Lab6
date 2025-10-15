%{

/*
	Austin Matthys
	October 2025

	Lex routine that returns tokens of digits, letters, IDs, strings, and key words such as int, void, and boolean.
	It's partner is lab6.y which expands the grammar for C-Algol and gives instruction to the tokens
*/



int mydebug = 0;
int linecount = 1;
#include "ast.h"
#include "lab6.tab.h" 

%}

%%

int 					{return (T_INT);}
void					{return (T_VOID);}
boolean					{return (T_BOOLEAN);}
begin					{return (T_BEGIN);}
end 					{return (T_END);}
if 						{return (T_IF);}
then 					{return (T_THEN);}
else 					{return (T_ELSE);}
endif 					{return (T_ENDIF);}
while 					{return (T_WHILE);}
do 						{return (T_DO);}
return 					{return (T_RETURN);}
read					{return (T_READ);}
write 					{return (T_WRITE);}
"<="					{return (T_LE);}
">="					{return (T_GE);}
"=="					{return (T_EQ);}
"!="					{return (T_NE);}
and 					{return (T_AND);}
or 						{return (T_OR);}
true 					{return (T_TRUE);}
false 					{return (T_FALSE);}
not 					{return (T_NOT);}


						
"//".*					{/* skip comments*/}

[a-zA-Z][0-9a-zA-Z]*	{if(mydebug) printf("ID found\n");
						yylval.string = strdup(yytext);
						return(T_ID);}

[0-9][0-9]*				{if(mydebug) printf("NUM found\n");
						yylval.value = atoi(yytext);
						return (T_NUM);}

\".*\"					{if(mydebug) printf("STRING found\n");
						yylval.string = strdup(yytext);
						return(T_STRING);}

[ \t]		{if (mydebug) fprintf(stderr,"Whitespace found\n");}

[()=\-+*/,<>[\];] 	{ if (mydebug) fprintf(stderr,"return a token %c\n",*yytext); // added ( and ) to the tokens
                       return (*yytext);}

\n 		{ if (mydebug) fprintf(stderr,"cariage return %c\n",*yytext); 
					   linecount++;}

%%

int yywrap(void){
	return 1;
}





