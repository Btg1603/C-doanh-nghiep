#include<stdio.h>
int main(){	
	int arr[5],max=0,min=0;
	for (int i = 0 ; i < 5 ; i++){
		printf("nhap phan tu thu %d ",i+1);
		scanf("%d",&arr[i]); 	
	} 
	for (int i = 1; i < 5; i++) {
	max=arr[0];
	min=arr[0]; 
	if (max < arr[i])
	max = arr[i];
	if (min > arr[i])
	min = arr[i];
	}
	printf("max = %d, min = %d",max,min); 
	return 0; 
	  
} 
