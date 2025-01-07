#include <stdio.h>
#include <stdlib.h>

void Update(int *ptr,int new_value, int add_index,int n){
	printf("Nhap vi tri can thay doi : ");
	scanf("%d",&add_index);
	if (add_index > n || add_index < 0){
		printf("Khong hop le!");
	} else {
		printf("Nhap gia tri de thay doi : ");
		scanf("%d",&new_value);
		*(ptr + add_index) = new_value;
		printf("Da cap nhat thanh cong : \n");
		for (int i = 0;i<n;i++){
			printf("%d ",*(ptr + i));
		}
	}
}


int main(){
	int *ptr;
	int n = 0;
	int new_value,add_index;
	printf("Nhap so phan tu cho mang : ");
	scanf("%d",&n);
	ptr = (int *) malloc (n* sizeof(int));
	for (int i = 0;i<n;i++){
		*(ptr + i) = i+1;
	}
	for (int i = 0;i<n;i++){
		printf("%d ",*(ptr + i));
	}
	printf("\n");
	Update(ptr,new_value,add_index,n);
	return 0;
}
