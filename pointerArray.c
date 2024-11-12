#include <stdio.h>
/*
     int arr [5] = {10,2,3,4,5} ;
	 int * ptr = arr ; // int * ptr = &arr[0]
	 ptr = &arr[0]
	 *ptr = ptr[0] = *arr = arr[0]
	 *(ptr + 1) = ptr[1] = *(arr + 1) = arr[1]
     *(ptr + 2) = ptr[2] = *(arr + 2) = arr[2]
*/

void main (void) {
	int arr [5] = {10,2,3,4,5} ;
	int * ptr = arr ; // int * ptr = &arr[0]
	int sum = 0 ;
	
	for (int i = 0 ; i < 5 ; i ++ ){
		printf("%d\n", arr[i]);
	}
	for (int i = 0 ; i < 5 ; i ++ ){
		sum += *(ptr + i) ;
	}
	printf("sum of Array = %d \n ",sum);

	
	for (int i = 0 ; i < 5 ; i ++ ){
		*( ptr + i ) = 0 ;
	}
	
	for (int i = 0 ; i < 5 ; i ++ ){
		printf("%d\n", *( ptr + i ));
	}
	
}