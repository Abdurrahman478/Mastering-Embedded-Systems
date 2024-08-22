

#include <stdio.h>

int main (){
	int op1 , op2 , sum = 0 ;
	printf("Enter two integers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d",&op1,&op2);
	sum = op1 + op2 ;
	printf("sum : %d",sum);
	return 0 ;
}

