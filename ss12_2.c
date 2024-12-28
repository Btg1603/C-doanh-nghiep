#include<stdio.h>
void in_ra(int a[],int n){
	for (int i=0; i<n ; i++){
		printf("%d ",a[i]); 
	} 
	printf("\n"); 
} 
int main(){
int ar[]={1,2,3,4,5,6,7,8};
int n =sizeof(ar)/sizeof(ar[0]);
in_ra(ar,n);
return 0;	
} 
