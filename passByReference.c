#include <stdio.h>

void inc (int * x);

void main (void){
	
	int y = 20;
	inc (&y);
	printf("%d", y);
	
}

void inc (int * x){
	 *x = 21 ;
}