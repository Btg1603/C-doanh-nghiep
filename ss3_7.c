#include<stdio.h>
int main(){
	int N,temp,t=0,i;
	printf("Nhap so nguyen co 4 chu so bat ki ");
	scanf("%d",&N);
	temp=N%10;
	N/=10; 
	t+=temp;
	temp=N%10;
	N/=10; 
	t+=temp;
	temp=N%10;
	N/=10; 
	t+=temp;
	temp=N%10;
	N/=10; 
	t+=temp;
	printf("tong = %d", t);   
} 
