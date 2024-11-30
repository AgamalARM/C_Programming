#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);

void main(void){
	int arr[5];
	int x;
	printf("%d aaaa", x);
	int num1 , num2 ;
	char op;
	printf("Please Enter first number:");
	scanf("%d", &num1);
	printf("Please Enter second number:");
	scanf("%d", &num2);
	printf("Please Enter operation:");
	scanf("   %c", &op);
	//printf("the Result of %c is:",op);
	
	switch  (op){
		case '+' :
		printf("Adding: %d \n", add(num1,num2));
		break ;
		case '-' :
		printf("Sub: %d \n", sub(num1,num2));
		break ;
		case '*' :
		printf("Mul: %d \n", mul(num1,num2));
		break ;
		case '/' :
		printf("div: %d \n", div(num1,num2));
		break ;
		case '%' :
		printf("mod: %d \n", mod(num1,num2));
		break ;
		default : 
		printf("Enter Operation +,-,*,/,% ONLY");
		  
	}
	
	
	
	
	
	
	
	
}