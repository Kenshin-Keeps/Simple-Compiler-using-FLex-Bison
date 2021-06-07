%{
	// Adding all the neccessary header file and function definations
	
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include "pf.tab.h"
	extern char* strdup(const char*);
	void yyerror(char *s);
%}

	// Defining some variable at intitial stage for furthure use of simplicity 

ID	[_a-zA-Z][_a-zA-Z0-9]*
HEADER	[u][s][i][n][g][ ][a-z]+.[h]
NU	[-]?[0-9][0-9]*[.]?[0-9]*

	// Syntax for detecting a keyword in the code. 

%%

[ \t]+
"start()" return(MAIN);
"int"	return(INT);
"char"	return(CHAR);
"float"	return(FLOAT);
"power"	return(POWER);
"facto"	return(FACTO);
"checkprime"	return(PRIME);
"read"	return(READ);
"print"	return(PRINT);
"switch"	return(SWITCH);
"state"	return(CASE);
"complementary"	return(DEFAULT);
"if"	return(IF);
"elif"	return(ELIF);
"otherwise"	return(ELSE);
"from"	return(FROM);
"to"	return(TO);
"inc"	return(INC);
"dec"	return(DEC);
"max"	return(MAX);
"min"	return(MIN);
{HEADER}	printf("Header file detected.\n");
{ID}	{yylval.stringValue = strdup(yytext); return(ID);}
{NU}	{	int length = strlen(yytext);
			int i = 0;
			while(i<length){
				if(yytext[i]=='.'){
					yylval.val = atof(yytext); 
					return(NUM);
				}
				i++;
			}
			yylval.val = atoi(yytext); 
			return(NUM);
		}
"+"		return(PLUS);
"-"		return(MINUS);
"*"		return(MUL);
"/"		return(DIV);
"=="	return(EQUAL);
"!="	return(NOTEQUAL);
">"		return(GT);
">="	return(GOE);
"<"		return(LT);
"<="	return(LOE);
[#].*	printf("\nSingle line comment detected. \n");
[,;{}=()]	{yylval.stringValue = strdup(yytext); return *yytext;}
.		yyerror("Invalid Character for this edition.");
[\n]	{}

%% 

int yywrap(void){
	return 1;
}