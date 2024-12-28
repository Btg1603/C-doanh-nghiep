#include<stdio.h>
int findmax(int a[],int n){ 
int max=a[0]; 
for (int i=0;i<n;i++){
	if (max<a[i]){
		max = a[i]; 
	}  
}
	return max;}

int main(){
	int n;
	printf("nhap so luong phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d ",i+1);
		scanf("%d",&a[i]); 
	} 
printf ("max = %d",findmax(a,n)) ;
	return 0;  
} 
