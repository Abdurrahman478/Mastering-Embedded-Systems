
#include <stdio.h>

int main(){
	char character ;
	printf("Enter an alphabet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&character);
	switch(character){
	case 'a' :
	case 'A' :
		printf("%c is vowel",character);
		break ;
	case 'e' :
	case 'E' :
		printf("%c is vowel",character);
		break;
	case 'i' :
	case 'I' :
		printf("%c is vowel",character);
		break;
	case 'o' :
	case 'O' :
		printf("%c is vowel",character);
		break;
	case 'u' :
	case 'U' :
		printf("%c is vowel",character);
		break;
	default :
		printf("%c is consonant",character);
	}
	return 0;
}

