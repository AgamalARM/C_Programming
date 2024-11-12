#include <stdio.h>

//     Size of any Pointer =  Size of int = 4 Byte
void main (void){
	
	int * ptr;
	char * ptrC;
	float * ptrF;
	
	
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(ptr));
	printf("%d\n", sizeof(ptrC));
	printf("%d\n", sizeof(ptrF));
	
}
