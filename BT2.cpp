#include <stdio.h>

void swap(int *ptr, int *ptr2){
	int temp;
	temp = *ptr;
	*ptr = *ptr2;
	*ptr2 = temp;
}

int main(){
	int a = 5;
	int b = 15;
	int *ptr;
	int *ptr2;
	ptr = &a;
	ptr2 = &b;
	swap(ptr,ptr2);
	printf("Gia tri cua a sau khi doi : %d\n",a);
	printf("Gia tri cua b sau khi doi : %d",b);
	return 0;
}
