
#include <stdio.h>

int main(){
	int a , b , tmp ;
	printf("Enter value of a :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&b);
	tmp = a ;
	a = b ;
	b = tmp ;
	printf("After swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d\n",b);
	return 0 ;
}

