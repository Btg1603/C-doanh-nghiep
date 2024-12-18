#include<stdio.h>
int main(){
	int n;
	printf("nhap so luong phan tu : ");
	scanf("%d",&n); 
	int arr[n];
	 
	for (int i = 0 ; i < n ; i++){
		do{ 
		printf("nhap phan tu thu %d ",i+1); 
		scanf("%d",&arr[i]);
		if(arr[i]%2==0) printf("nhap lai\n"); 	
	}while (arr[i]%2==0); 
}
	
	return 0; 
	  
} 
