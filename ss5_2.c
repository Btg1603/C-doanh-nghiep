#include<stdio.h>
int main (){
	int n=12,a;
do{ 
	printf("nhap so ");
	scanf("%d",&a);
	if (n!=a) printf("sai roi nhap lai di\n"); 
 }while	(n!=a); 
 printf("chinh xac, la so %d",n); 
return 0;	 
}
