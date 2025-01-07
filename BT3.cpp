#include <stdio.h>

int sumvalue(int *ptr, int *ptr2, int *sum){
	return *sum = *ptr + *ptr2;
}

int main(){
	int a = 5;
	int b = 15;
	int sum = 0;
	printf("Tong a va b la : %d\n",sumvalue(&a,&b,&sum));
	return 0;
}
