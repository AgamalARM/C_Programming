#include <stdio.h>
void passArray (int * ptr);
void main (void){
	int arr [5] = {1,2,3,4,5};
	passArray(arr);
	
}

void passArray (int * ptr){
	for (int i = 0 ; i < 5 ; i ++ ){
		printf("%d\n", *( ptr + i ));
	}
	
}