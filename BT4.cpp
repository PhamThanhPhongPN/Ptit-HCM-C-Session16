#include <stdio.h>

void PrintArray(int *ptr){
	for (int i = 0; i <5; i++){
		printf("%d ",*(ptr + i));
	}
}


int main(){
	int array[5] = {0, 4, 6, 23, 101};
	int *ptr;
	ptr = array;
	PrintArray(ptr);
	return 0;
}
