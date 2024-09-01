

#include <stdio.h>

int main() {
	int i = 0 , counter = 0;
	char str[100];
	printf("Enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(str);
	while(str[i] !=  '\0'){
		counter++;
		i++;
	}
	printf("Length of string : %d",counter);
	return 0;
}


