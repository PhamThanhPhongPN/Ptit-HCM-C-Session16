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
	swap(&a,&b);
	printf("Gia tri cua a sau khi doi : %d\n",a);
	printf("Gia tri cua b sau khi doi : %d",b);
	return 0;
}
