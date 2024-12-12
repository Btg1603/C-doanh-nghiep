#include<stdio.h>
int main(){
	int n,s,i;
	printf("nhap mot so nguyen tu 1 den 10: ");
	scanf("%d",&n);
for (i=1;i<=10;i++){
	s=n*i;
	printf("%d x %d = %d\n",n,i,s); 
} 
} 
