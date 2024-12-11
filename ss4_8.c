#include<stdio.h>
int main (){
	int a,b,c;
 	printf("Nhap vao canh thu 1= ");
	scanf("%d",&a);
	printf("Nhap vao canh thu 2= ");
	scanf("%d",&b);
	printf("Nhap vao canh thu 3= ");
	scanf("%d",&c);
	if (((a+b)>c)&&((a+c)>b)&&((c+b)>a)){
	 printf("la mot tam giac");
	}else printf ("khong la mot tam giac");
	return 0;
}
