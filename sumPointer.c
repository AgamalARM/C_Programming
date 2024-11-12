#include <stdio.h>

int sumP (int * x, int * y);

void main (void){
	int a ,b ;
	printf("Please enter First num :");
	scanf("%d", &a);
	printf("Please enter Second num :");
	scanf("%d", &b);
	printf("Sum of number = %d " , sumP(&a,&b));
	
	
}

int sumP (int * x, int * y){
	return (*x + *y);
}