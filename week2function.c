#include<stdio.h>

int factorial(int n){
	if(n==1){
		return 1;
	}else{
		return n *factorial(n-1);
	}
}

void main(){
	int n;
	printf("Input number:");
	scanf("%d" , &n);
	printf("Factorial of given number is : %d",factorial(n));
}