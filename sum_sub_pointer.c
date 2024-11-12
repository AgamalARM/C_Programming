#include <stdio.h>

void sum_sub (int * x, int * y , int * sum , int * sub);

void main (void){
	int a , b , sum , sub ;
	printf("Please enter First num :");
	scanf("%d", &a);
	printf("Please enter Second num :");
	scanf("%d", &b);
	sum_sub(&a,&b,&sum,&sub);
	printf("Sum of number = %d , sub = %d ", sum,sub );
	
	
}

void sum_sub (int * x, int * y, int * sum , int * sub){
	*sum = *x + *y;
	*sub = *x - *y;
}