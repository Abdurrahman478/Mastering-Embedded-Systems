

#include <stdio.h>

int main (){
	int Number , LargestNumber = 0 , i;
	printf("Enter a three numbers : ");
	fflush(stdin);
	fflush(stdout);
	for(i = 0 ; i<3 ; i++){
		scanf("%d",&Number);
		if(Number>=LargestNumber){
			LargestNumber = Number ;
		}
	}
	printf("Largest number = %d",LargestNumber);
	return 0 ;
}

