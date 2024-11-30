#include "STD_TYPES.h"
#include <stdio.h>


void main (void){
	if ((signed)sizeof (u8) > -1 ) {
		printf("T");
	}else{
		printf("F");
	}
	
	printf("%d\n", sizeof( u8 ) );
	printf("%d\n", sizeof( u16 ) );
	printf("%d\n", sizeof( u32 ) );
	printf("%d\n", sizeof( u64 ) );
	printf("%d\n", sizeof( s8 ) );
	printf("%d\n", sizeof( s16 ) );
	printf("%d\n", sizeof( s32 ) );
	printf("%d\n", sizeof( s64 ) );
	printf("%d\n", sizeof( f32 ) );
	printf("%d\n", sizeof( f64 ) );
	printf("%d\n", sizeof( f96 ) );
}