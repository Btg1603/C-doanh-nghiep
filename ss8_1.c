#include<stdio.h>
int main(){
	int n;
	printf("nhap vao so phan tu ");
	scanf("%d",&n);
	int arr[n];
	for (int i = 0 ; i < n ; i++){
		printf("nhap phan tu thu %d ",i+1);
		scanf("%d",&arr[i]); 	
	} 
	for (int i=n-1 ; i >= 0; i--){
		printf("%d ",arr[i]); 
	} 
} 
