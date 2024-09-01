

#include<stdio.h>

int main (){
	int Rows , Colomns , i , j;
	printf("Enter the number of rows and colomns of the matrix :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&Rows,&Colomns);
	int** arr = (int**)malloc(Rows*sizeof(int*));
	for(i = 0 ; i < Rows ; i++){
		arr[i]=(int*)malloc(Colomns*sizeof(int));
	}
	int** transpose = (int**)malloc(Colomns*sizeof(int*));
	for(i = 0 ; i < Colomns ; i++){
		transpose[i]=(int*)malloc(Rows*sizeof(int));
	}
	transpose[0][0]=0;
	printf("Enter elements of matrix :\n");
	for(i = 0 ; i < Rows ; i++){
		for(j = 0 ; j < Colomns ; j++){
			printf("Enter element a%d%d : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr[i][j]);
			transpose[j][i]=arr[i][j];
		}
	}
	printf("Entered matrix :\n");
	for(i = 0 ; i < Rows ; i++){
		for(j = 0 ; j < Colomns ; j++){
			if(j == (Colomns-1)){
				printf("%d\n",arr[i][j]);
			}
			else{
				printf("%d\t",arr[i][j]);
			}
		}
	}
	printf("Transpose of matrix :\n");
	for(i = 0 ; i < Colomns ; i++){
		for(j = 0 ; j < Rows ; j++){
			if(j == (Rows-1)){
				printf("%d\n",transpose[i][j]);
			}
			else{
				printf("%d\t",transpose[i][j]);
			}
		}
	}

	return 0;
}


