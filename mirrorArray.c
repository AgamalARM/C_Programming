#include <stdio.h>


void main (void){
	int i, size;
	printf("Enter size of array");
	scanf("%d", &size);
	int arr[size];
	for (i=0 ; i<size ; i++){
		scanf("%d", &arr[i]);
	}
	for (i= 0 ; i<size/2 ; i++){
		if (arr[i] != arr[size - i -1]){
			printf("Not ");
			break ; 
		}
	}
	printf("mirror");
	
	
	
	
	
	
}