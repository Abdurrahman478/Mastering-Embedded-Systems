
#include <stdio.h>

int main (){
	int i ,number, factorial = 1 ;
	printf("Enter an integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	if(number == 0 || number == 1){
		printf("factorial = %d",factorial);
	}
	else if(number < 0){
		puts("Error!! Factorial of negative numbers doesn't exist");
	}
	else{
		for(i=1 ; i <= number ; i++){
			factorial *= i  ;
		}
		printf("factorial = %d",factorial);
	}
	return 0 ;
}

