

#include <stdio.h>

int main (){
	int DataNumber , i ,sum = 0  ;
	printf("Enter number of data :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&DataNumber);
	int* Numbers = malloc(DataNumber*sizeof(int));
	for(i = 0 ; i < DataNumber ; i++){
		printf("%d. Enter Number : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&Numbers[i]);
		sum += Numbers[i];
	}
	printf("Average = %d",sum/DataNumber);
	return 0 ;
}



