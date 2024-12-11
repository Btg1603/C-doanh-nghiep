#include<stdio.h>
int main (){
	int a,b,c,temp;
 	printf("Nhap vao so thu 1= ");
	scanf("%d",&a);
	printf("Nhap vao so thu 2= ");
	scanf("%d",&b);
	printf("Nhap vao so thu 3= ");
	scanf("%d",&c);
		if (a>b) temp==b; b==a ;a==temp ;
	if ( (a<=c && c<=b) || (b<=c && c<=a) )
	printf("%d nam trong khoang %d va %d ", c,b,a);
	else printf("%d khong nam trong khoang %d va %d ", c,b,a);
	return 0;    
}      
