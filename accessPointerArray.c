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
	int arr [2][3] = {
		                {1,2,3},
						{4,5,6}
	                                  } ;
	*(*(arr + 1) + 2 ) = 20 ;
	printf("%d\n", *(*(arr + 1) + 2 ));
	printf("*******************************\n");
	for(int i = 0 ; i<2 ; i++ ){
		for(int j = 0 ; j<3 ; j++ ){
			printf("%d ", arr[i][j]);
		
	}
	printf("\n");
		
	}
	
	
}