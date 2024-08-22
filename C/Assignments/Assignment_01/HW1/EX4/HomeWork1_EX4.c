

#include <stdio.h>

int main(){
	float op1 , op2 , product = 0 ;
		printf("Enter two numbers:");
		fflush(stdin);
		fflush(stdout);
		scanf("%f%f",&op1,&op2);
		product = op1 * op2 ;
		printf("sum : %f",product);
		return 0 ;
}


