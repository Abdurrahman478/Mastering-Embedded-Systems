

#include <stdio.h>

int main(){
	int number ;
	printf("Enter an integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	if(number%2){
		printf("%d is odd",number);
	}
	else{
		printf("%d is even",number);
	}
	return 0 ;
}

