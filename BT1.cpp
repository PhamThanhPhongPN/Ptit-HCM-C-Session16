#include <stdio.h>

int main(){
	int a = 5;
	int *ptr;
	ptr = &a;
	printf("Gia tri cua a la : %d\n",a);
	printf("Gia tri cua a theo con tro la : %d\n",*ptr);
	printf("Dia chi cua a la : %p\n",&a);
	printf("Dia chi cua a theo con tro la : %p",ptr);
	return 0;
}
