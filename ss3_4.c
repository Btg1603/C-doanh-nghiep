#include<stdio.h>
int main(){
	float t,v,a;
	printf("Nhap diem toan, van, anh ");
	scanf("%f %f %f",&t,&v,&a);
	printf("tong diem la %.2f\n",t+v+a);
	printf("diem trung binh la %.2f\n",(t+v+a)/3);
	return 0;   
} 
