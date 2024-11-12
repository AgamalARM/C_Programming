#include <stdio.h>

void main (void){
	
	int x ;
	int y ;
	int * px = &x ;
	printf("%d\n", px);
	int * py = &y ;
	printf("%d\n", py);
	printf("%d\n", (px - py) );
	printf("%d\n", (px - 4) ); //4 step = 4 * int size
	printf("%d\n", (px - py) );
	// printf("%d\n", (px + py) ); // NOT allawed in C
	
	
	
}