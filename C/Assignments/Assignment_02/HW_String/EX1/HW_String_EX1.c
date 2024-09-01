

#include <stdio.h>

int main (){

	int i = 0 , counter = 0 ;
	char character ;
	char str[100];
	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(str);
	printf("Enter a character to find frequency : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&character);
	while(str[i] != '\0'){
		if(str[i]==character){
			counter++;
		}
		i++;
	}
	printf("frequency of %c = %d",character,counter);
	return 0 ;
}



