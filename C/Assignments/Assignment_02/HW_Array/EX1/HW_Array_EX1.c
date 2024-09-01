

#include <stdio.h>

int main (){
	int i , k , j , x , y ;
	int OpArr1[2][2];
	int OpArr2[2][2];
	int ResArr[2][2];
	printf("Enter the elements of 1st array \n");
	for(i = 0 ; i < 2 ; i++){
		for(j = 0 ; j < 2 ; j++){
			for(k=0 ; k<2 ; k++){

				if(i == 0){
					printf("Enter a%d%d : ",j,k);
					fflush(stdin);fflush(stdout);
					scanf("%d",&OpArr1[j][k]);
				}
				else if(i == 1){
					printf("Enter b%d%d : ",j,k);
					fflush(stdin);fflush(stdout);
					scanf("%d",&OpArr2[j][k]);
				}
			}
		}
	}
	for(x = 0 ; x < 2 ; x++){
		for(y = 0 ; y < 2 ; y++){
			ResArr[x][y] = OpArr1[x][y] + OpArr2[x][y];
			if(y==0){
				printf("%d\t",ResArr[x][y]);
			}
			else{
				printf("%d\n",ResArr[x][y]);
			}
		}
	}
	return 0 ;
}





