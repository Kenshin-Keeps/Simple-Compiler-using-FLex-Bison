%{
	// Adding all the header files and function definations
	
	#include<stdio.h>
	#include<stdlib.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	int yylex(void);
	void yyerror(char *s);
	FILE *yyin;
	
	int no_var = 0;		// This variable will keep track of the total variables used.
	
	// Defining a structure to handle the properties of variables.
	
	struct variable_structure{
		char var_name[20];
		int var_type;
		int ival;
		float fval;
		char *cval;
	}variable[100];
	
	// Function for searching if the present variable name has already been used.
	
	int search_var(char name[20]){
		int i;
		for(i=0; i<no_var; i++){
			if(!strcmp(variable[i].var_name, name)){
				return 1;
			}
		}
		return 0;
	}
	
	// Setting the type of a variable (in integer value)
	
	void set_var_type(int type){
		int i;
		for(i=0; i<no_var; i++){
			if(variable[i].var_type == -1){
				variable[i].var_type = type;
			}
		}
	}
	
	// Finind the index of any variable
	
	int get_var_index(char name[20]){
		int i;
		for(i=0; i<no_var; i++){
			if(!strcmp(variable[i].var_name, name)){
				return i;
			}
		}
		return -1;
	}
	
%}

%union{
	double val;
	char* stringValue;
}

	// Defining all the used tokens and precendences of the required ones.

%error-verbose
%token MAIN INT CHAR FLOAT POWER FACTO PRIME READ PRINT IF ELIF ELSE SWITCH CASE DEFAULT FROM TO INC DEC MAX MIN ID NUM PLUS MINUS MUL DIV EQUAL NOTEQUAL GT GOE LT LOE
%left PLUS MINUS
%left MUL DIV

	// Defining token type

%type<val>prime_code factorial_code casenum_code default_code case_code switch_code e f t expression else_if elsee bool_expression power_code min_code max_code declaration assignment condition for_code print_code read_code program code TYPE MAIN INT CHAR FLOAT POWER FACTO PRIME READ PRINT SWITCH CASE DEFAULT IF ELIF ELSE FROM TO INC DEC MAX MIN NUM PLUS MINUS MUL DIV EQUAL NOTEQUAL GT GOE LT LOE
%type<stringValue> ID1 ID

%%
	// Rules for the code using tokens

program: MAIN '{' code '}'	{printf("\nValid code\n");
							printf("\nNo of variables--> %d", no_var);}
		;

code: declaration code
	| assignment code
	| condition code
	| for_code code
	| switch_code code
	| print_code code
	| read_code code
	| power_code code
	| factorial_code code
	| prime_code code
	| min_code code
	| max_code code
	|
	;

	// CFG for power() funtion
	
power_code: POWER '(' NUM ',' NUM ')'';'	{		
	int i;
	i = pow($3, $5);
	printf("\nPower function value--> %d ", i);
}
	;

	//CFG for calculating factorial of a number

factorial_code: FACTO '(' NUM ')' ';'	{
	int j = $3;
	int i, result;
	result = 1;
	if(j==0){
		printf("\nFactorial of %d is %d", j, result);
	}
	else{
		for(i = 1; i <= j; i++){
			result = result*i;
		}
		printf("\nFactorial of %d is %d", j, result);
	}
	
}
	;
	
	//CFG for checking if a number is prime or not
	
prime_code: PRIME '(' NUM ')' ';'{
	int n, i, flag = 0;
	n = $3;
	for (i = 2; i <= n / 2; ++i) {
		if (n % i == 0) {
			flag = 1;
			break;
		}
	}
    printf("\n%d", flag);

}
	;

	//CFG for max() funtion

max_code: MAX '(' ID ',' ID')'';'{
	int i = get_var_index($3);
	int j = get_var_index($5);
	int k,l;
	if((variable[i].var_type == 1) &&(variable[j].var_type == 1) ){
		k = variable[i].ival;
		l = variable[j].ival;
		if(l>k){
			printf("\nMax value is--> %d", l);
		}
		else{
			printf("\nMax value is--> %d", k);
		}
	}
	else if((variable[i].var_type == 2) &&(variable[j].var_type == 2) ){
		k = variable[i].fval;
		l = variable[j].fval;
		if(l>k){
			printf("\nMax value is--> %f", l);
		}
		else{
			printf("\nMax value is--> %f", k);
		}
	}
	else{
		printf("\nNot integer or float variable");
	}
}
	;
	
	//CFG for min() function
	
min_code: MIN '(' ID ',' ID')'';'{
	int i = get_var_index($3);
	int j = get_var_index($5);
	int k,l;
	if((variable[i].var_type == 1) &&(variable[j].var_type == 1) ){
		k = variable[i].ival;
		l = variable[j].ival;
		if(l<k){
			printf("\nMin value is--> %d", l);
		}
		else{
			printf("\nMin value is--> %d", k);
		}
	}
	else if((variable[i].var_type == 2) &&(variable[j].var_type == 2) ){
		k = variable[i].fval;
		l = variable[j].fval;
		if(l<k){
			printf("\nMin value is--> %f", l);
		}
		else{
			printf("\nMin value is--> %f", k);
		}
	}
	else{
		printf("\nNot integer or float variable");
	}
}
	;
	
	//CFG for print() function
	
print_code: PRINT '(' ID ')'';'{
	int i = get_var_index($3);
	if(variable[i].var_type == 1){
		printf("\nVariable name--> %s, Value--> %d", variable[i].var_name, variable[i].ival);
	}
	else if(variable[i].var_type == 2){
		printf("\nVariable name--> %s, Value--> %f", variable[i].var_name, variable[i].fval);
	}
	else{
		printf("\nVariable name--> %s, Value--> %c", variable[i].var_name, variable[i].cval);
	}
}
	;
	
	//CFG for read() funtion
	
read_code: READ'(' ID ')'';'{
	int i = get_var_index($3);
	printf("\nRead command found for variabale--> %s, but no further implementaion\n",variable[i].var_name);
}
	;
	
	// CFG for from-to loop (For Loop)

switch_code: SWITCH '(' ID ')' '{' case_code '}' {
	printf("\nSwitch-case structure detected.");
}
	;
case_code: casenum_code default_code
	;

casenum_code: CASE NUM '{' code '}' casenum_code {
	printf("\nCase no--> %d", $2);
}
	|
	;
default_code: DEFAULT '{' code '}'
	;


for_code: FROM ID TO NUM INC NUM '{' code '}' {
	printf("\nFor loop detected");
	int ii = get_var_index($2);
	int i = variable[ii].ival;
	int j = $4;
	int inc = $6;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("\nFrom-To Loop running-->");
	}
		
}
		| FROM ID TO NUM DEC NUM '{' code '}'{
	printf("\nFor loop detected");
	int ii = get_var_index($2);
	int i = variable[ii].ival;
	int j = $4;
	int dec = $6;
	int k;
	for(k=i; k<j; k=k-dec){
		printf("\nFrom-To Loop running-->");
	}
}
	;
	
	//CFG for while loop
	/*
while_code: WHILE'(' bool_expression ')''{' code '}'{
	printf("\nwhile loop detected\n");
	int i = $3;
	while(i==1){
		printf("\nWhile Loop running--> %d", $6);
	}
	
}
	;
	*/
	//CFG for if-elif-else structure
	
condition: IF'(' bool_expression ')''{'code'}' else_if elsee {
	printf("\nIF condition detected");
	int i = $3;
	if(i==1){
		printf("\nIF condition is true");
	}
	else{
		printf("\nIF condition false");
	}
}
	;
else_if: ELIF '(' bool_expression ')''{' code '}' else_if {
	printf("\nELIF condition detected");
	int i = $3;
	if(i==1){
		printf("\nELIF condition true");
	}
	else{
		printf("\nELIF condition false");
	}
}
		|
	;
elsee: ELSE '{' code '}' {
	printf("\nELSE condition is detected");
}
	|
	;
	
	//CFG for evaluating boolian expression

bool_expression: expression EQUAL expression {
	if($1==$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
				| expression NOTEQUAL expression {
	if($1!=$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
				| expression GT expression {
	if($1>$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
				| expression GOE expression {
	if($1>=$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
				| expression LT expression {
	if($1<$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
				| expression LOE expression {
	if($1<=$3){
		$$ = 1;
	}
	else{
		$$ = 0;
	}
}
	;

	// CFG for variable declaration
declaration: TYPE ID1 ';' {
	set_var_type($1);
}
	;
TYPE: INT	{$$ = 1; printf("\nVariable type--> Integer");}
	| FLOAT	{$$ = 2; printf("\nVariable type--> Float");}
	| CHAR	{$$ = 0; printf("\nVariable type--> Character");}
	;
ID1: ID1 ',' ID {
	if(search_var($3)==0){
		printf("\nValid declaration");
		strcpy(variable[no_var].var_name, $3);
		printf("\nVariable name--> %s", $3);
		variable[no_var].var_type =  -1;
		no_var = no_var + 1;
	}
	else{
		printf("\nVariable is already used");
	}
} 
	| ID {
	if(search_var($1)==0){
		printf("\nValid declaration");
		strcpy(variable[no_var].var_name, $1);
		printf("\nVariable name--> %s", $1);
		variable[no_var].var_type =  -1;
		no_var = no_var + 1;
	}
	else{
		printf("\nVariable is already used");
	}
	strcpy($$, $1);
}
	;
	
	// CFG for assigning value
assignment: ID '=' expression ';' {
	$$ = $3;
	if(search_var($1)==1){
		int i = get_var_index($1);
		if(variable[i].var_type==0){
			//variable[i].cval = (char)$3;
			variable[i].cval = (char*)&$3;
			printf("\nVariable value--> %s", variable[i].cval);
		}
		else if(variable[i].var_type==1){
			variable[i].ival = $3;
			printf("\nVariable value--> %d", variable[i].ival);
		}
		else if(variable[i].var_type==2){
			variable[i].fval = (float)$3;
			printf("\nVariable value--> %f", variable[i].fval);
		}
	}
	else{
		printf("\nVariable is not declared\n");
	}
}
	;

expression: e {$$ = $1;}
	;
e: e PLUS f {$$ = $1 + $3; }
	| e MINUS f {$$ = $1 - $3;}
	| f      {$$ = $1;}
	;
f: f MUL t {$$ = $1 * $3;}
	| f DIV t 
	{if($3 != 0)
	{
		$$ = $1 / $3;
	}
	else{
		printf("\nMathematically invalid expression");
	}
}
	| t   {$$ = $1;}
	;
t: '(' e ')' {$$ = $2;}
	| ID {
	int id_index = get_var_index($1);
	if(id_index == -1)
	{
		yyerror("VARIABLE DOESN'T EXIST");
	}
	else
	{
		/*if(variable[id_index].var_type == 0)
		{
			$$ = variable[id_index].cval;
		}*/
		if(variable[id_index].var_type == 1)
		{
			$$ = variable[id_index].ival;
		}
		else if(variable[id_index].var_type == 2)
		{
			$$ = variable[id_index].fval;
		}
	}
}
	| NUM  {$$ = $1;}
	;

%%

void yyerror(char *s)
{
	fprintf(stderr, "\n%s", s);
}

int main(){
	yyin = fopen("test.txt", "r");
	//yyout = freopen("testout.txt", "w", stdout);
	yyparse();
	return 0;
}