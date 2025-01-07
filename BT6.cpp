#include <stdio.h>
#include <stdlib.h>

void FindValue(int *ptr, int value, int n){
	printf("Nhap gia tri ban muon tim : ");
	scanf("%d",&value);
	for (int i = 0; i < n;i++ ){
		if (*(ptr + i) == value){
			printf("%d",i);
		}
	}
}


int main(){
	int *ptr;
	int n = 0;
	int value;
	int new_value,add_index;
	printf("Nhap so phan tu cho mang : ");
	scanf("%d",&n);
	ptr = (int *) malloc (n* sizeof(int));
	for (int i = 0;i<n;i++){
		printf("array[%d] = ", i);
		scanf("%d",ptr + i);
	}
	for (int i = 0;i<n;i++){
		printf("%d ",*(ptr + i));
	}
	printf("\n");
	FindValue(ptr,value,n);
	return 0;
}
