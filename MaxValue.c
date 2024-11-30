#include <stdio.h>
#include "STD_TYPES.h"

s16 printMax (s8 number);

void main (void){
	s16 num,resault ;
	s8 i ;
	for ( i = 0 ; i < 3 ; i++){
		printf("enter your number: ");
		scanf("%d", &num);
		resault = printMax(num);
		printf("The Max number: %d \n", resault);
	}
	
}
s16 printMax (s8 number){
	static s8 flag = 0 ;
	static s16 max ;
	if (flag == 0){
		flag++ ;
		max = number ;
	}else {
		if (number > max){
			max = number ;
		}
		
	}
	return max ;
	
}