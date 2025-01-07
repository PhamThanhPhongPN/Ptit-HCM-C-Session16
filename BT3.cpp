#include <stdio.h>

int sumvalue(int *ptr, int *ptr2){
	int sum = 0;
	sum = *ptr + *ptr2;
	return sum;
}

int main(){
	int a = 5;
	int b = 15;
	printf("Tong a va b la : %d\n",sumvalue(&a,&b));
	return 0;
}
