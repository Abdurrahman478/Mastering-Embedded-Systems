

#include <stdio.h>

int main(){
	int i = 0 ;
	char str[100];
	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(str);
	int j = strlen(str);
	char* StrRev = (char*)malloc(j*sizeof(char));
	while(str[i] != '\0'){
		StrRev[j-1] = str[i] ;
		i++;
		j--;
	}
	puts(StrRev);
	return 0 ;
}

