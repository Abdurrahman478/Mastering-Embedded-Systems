
#include <stdio.h>

int main (){
	int No_Elements, NewElement , Location , i  ;
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&No_Elements);
	fflush(stdin);fflush(stdout);
	int* arr = (int*)malloc(No_Elements*sizeof(int));
	for(i = 0 ; i < No_Elements ; i++){
		scanf("%d ",&arr[i]);
	}
	printf("enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&NewElement);
	printf("enter the location :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Location);
	arr = (int*)realloc(arr,(No_Elements+1)*sizeof(int));
	i = No_Elements+1;
	while(i!=0){
		arr[i]=arr[i-1];
		if(i==Location){break;}
		i--;
	}
	arr[Location-1] =  NewElement ;
	for(i = 0 ; i<(No_Elements+1) ;i++ ){
		printf("%d ",arr[i]);
	}
	return 0 ;
}


