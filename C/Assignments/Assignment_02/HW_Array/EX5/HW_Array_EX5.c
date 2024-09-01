

#include <stdio.h>

int main (){
	int ElementsNumber, search, i ;
	printf("Enter the number of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&ElementsNumber);
	int* arr = (int*)malloc(ElementsNumber*sizeof(int));
	for(i = 0 ; i<ElementsNumber ;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&search);
	for(i = 0 ; i<ElementsNumber ;i++){
		if(search==arr[i]){
			printf("Number found at the location = %d ",i+1);
			break;
		}
	}
	if(i==ElementsNumber){
		printf("Number not found ");
	}
	return 0 ;
}


