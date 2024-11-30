#include <stdio.h>
#include "STD_TYPES.h"

typedef struct {
	u8 id;
	u8 pw;
	u16 salary;
}newtype;
newtype fun (newtype emp1);
void main (void){
	newtype emp = {1,123,5000};
	newtype emp2 = fun(emp);
	printf("%d \n",emp.pw);
	printf("%d",emp2.pw);
	
}
newtype fun (newtype emp1){
	emp1.id ++ ;
	emp1.pw += 10 ;
	emp1.salary += 2000 ;
	return emp1;
}
