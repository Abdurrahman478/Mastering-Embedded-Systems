
#include <stdio.h>

int main (){
	int number ;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	if(number>0){
		printf("%d is positive",number);
	}
	else if(number<0){
		printf("%d is negative",number);
	}
	else{
		printf("You entered zero");
	}
	return 0 ;
}

