#include<stdio.h>
int main(){
	int n;
	printf("nhap so luong phan tu : ");
	scanf("%d",&n); 
	int arr[n];
		int size = sizeof(arr) / sizeof(arr[0]); 
	for (int i = 0 ; i < n ; i++){
		printf("nhap phan tu thu %d ",i+1);
		scanf("%d",&arr[i]); 	
	}
	printf("Cac phan tu trong mang la:\n"); 
	for (int i = 0; i < n; i++) { 
	printf("%d\n",arr[i]); 
	}
	printf("do dai cua mang = %d ",size);
	return 0; 
	  
} 
