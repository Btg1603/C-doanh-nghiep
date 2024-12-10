#include<stdio.h>
int main(){
	int N,temp,t,i;
	printf("Nhap so nguyen co 4 chu so bat ki ");
	scanf("%d",&N);
	while(N!=0){
	temp=N%10;
	N/=10; 
	t+=temp;
}
	printf("tong = %d", t);   
} 
