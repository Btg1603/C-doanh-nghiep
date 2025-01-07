#include<stdio.h>
void find (int *arr, int *value, int *size){
	for(int i =0 ; i<*size;i++){
		if (*(arr+i)==*value){
			printf("%d",i);
			return; 
		}
	}
	printf("Khong tim thay gia tri trong mang!!!"); 
} 
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int value=5; 
	int size=sizeof(arr)/sizeof(arr[0]);
	find(arr,&value,&size);
	return 0; 
} 
