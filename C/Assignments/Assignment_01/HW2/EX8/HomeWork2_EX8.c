
#include <stdio.h>

int main(){
	float op1 , op2 , result ;
	char operator ;
	printf("Enter operator either + or - or * or / :");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operator);
	scanf("%f%f",&op1,&op2);
	switch(operator){
	case '+' :
		result = op1 + op2 ;
		break ;
	case '-' :
		result = op1 - op2 ;
		break ;
	case '*' :
		result = op1 * op2 ;
		break ;
	case '/' :
		result = op1 / op2 ;
		break ;
	}
	printf("%f %c %f = %f",op1,operator,op2,result);
	return 0 ;
}

