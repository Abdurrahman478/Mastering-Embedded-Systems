
#include <stdio.h>

int main(){
	char character ;
	printf("Enter an alphabet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&character);
	if((character>=65 && character<=90) || (character>=97 && character <=122) ){
		printf("%c is an alphabet",character);
	}
	else{
		printf("%c is not an alphabet",character);
	}
	return 0 ;
}

