#include<stdio.h>
void arrange(int *arr,int *size){
	for(int i=0;i<*size-1;i++){
		int temp=0; 
		for(int j=i+1;j<*size;j++){
			if (*(arr+i)>*(arr+j)){
				 temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp; 
			} 
		} 
	}
printf("Sap xep tang dan: "); 
for(int i=0;i<*size;i++){
	printf("%d ",*(arr+i)); 
}
return;	 
}
int main(){
	int arr[]={5,6,4,7,4,2,1,9}; 
	int size=sizeof(arr)/sizeof(arr[0]);
	arrange(arr,&size);
	return 0; 
} 
