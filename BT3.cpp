#include <stdio.h>

int sumvalue(int *ptr, int *ptr2){
	int sum = 0;
	sum = *ptr + *ptr2;
	return sum;
}

int main(){
	int a = 5;
	int b = 15;
	int *ptr;
	int *ptr2;
	ptr = &a;
	ptr2 = &b;
	printf("Tong a va b la : %d\n",sumvalue(ptr,ptr2));
	return 0;
}
