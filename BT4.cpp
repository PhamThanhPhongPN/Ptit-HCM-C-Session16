#include <stdio.h>
#include <stdlib.h> 
void PrintArray(int *ptr,int size){
	for (int i = 0; i <size; i++){
		printf("%d ",*(ptr + i));
	}
}


int main(){
	int *ptr;
	int size;
	printf("Nhap so phan tu cho mang : ");
	scanf("%d",&size);
	ptr = (int *) malloc (size* sizeof(int));
	for (int i = 0;i<size;i++){
		printf("array[%d] = ", i);
		scanf("%d",ptr + i);
	}
	PrintArray(ptr,size);
	return 0;
}
