#include <stdio.h>

int main(){
	int x = 3;
	int y;
	int *px;
	
	px = &x;
	printf("\nThe Value of x is : %d",x);
	printf("\nThe address  of x is : %d",px);
	printf("\nThe address  of x is : %d",&x);	
	printf("\n The value of x is: %d",*px);
	*px = 5;
	printf("\n The value of x is : %d",x);
	return 0;
}