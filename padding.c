#include <stdio.h>
#include "STD_TYPES.h"
#pragma pack (1)// to delete padding from struct
               //  (1) for delete ALL padding in struct
			   //  (n) n is a number of padding bytes
typedef struct {
	u8 x ;
	u16 y ;
	u8 z ;
	
}newtype;

void main (void){
	printf("%d",sizeof(newtype));
}