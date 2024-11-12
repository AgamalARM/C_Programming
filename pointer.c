#include <stdio.h>


void main (void){
	int x = 10 ;
	int * ptr ;
	ptr = &x ;
	*ptr = 20 ;
	
	printf("%d\n",x); // 20
	printf("%p\n",&x); // address of x
	printf("%p\n",ptr); // address of x
	printf("%d\n",*ptr); // 20
	printf("%p\n",&ptr); // address of pointer ptr
	printf ("%d",sizeof(ptr)); // size of pointer = sizeof int
}