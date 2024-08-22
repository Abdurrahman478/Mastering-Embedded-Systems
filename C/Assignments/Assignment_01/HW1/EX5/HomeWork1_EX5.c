

#include <stdio.h>

int main(){
	char character ;
	printf("Enter a character :");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&character);
	printf("ASCII value of %c = %d",character,character);
	return 0 ;
}

