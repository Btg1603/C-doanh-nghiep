#include<stdio.h>
int main(){	
	int arr[5];
	for (int i = 0 ; i < 5 ; i++){
		printf("nhap phan tu thu %d ",i+1);
		scanf("%d",&arr[i]); 	
	}
	printf("Cac phan tu trong mang la:\n"); 
	for (int i = 0; i < 5; i++) { 
	printf("%d\n",arr[i]); 
	}
	return 0; 
	  
} 
