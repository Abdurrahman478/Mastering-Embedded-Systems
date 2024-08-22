
#include <stdio.h>

int main(){
	int i ,number, sum = 0 ;
	printf("Enter an integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	for(i=1 ; i <= number ; i++){
		sum += i ;
	}
	printf("sum = %d",sum);
	return 0 ;
}

