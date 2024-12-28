#include<stdio.h>
int tinh_tong(a,b){
printf("tong hai so la %d",a+b); }
int main(){
	int a,b; 
	printf("nhap so thu nhat: ");
	scanf("%d",&a);
	printf("nhap so thu hai: ");
	scanf("%d",&b);
	tinh_tong(a,b);  
	return 0; 
}
