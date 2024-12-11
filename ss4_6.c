#include<stdio.h>
int main(){
	float n,c,sd;
	printf("nhap so dien dau thang ");
	scanf("%f",&n);
	printf("nhap so dien cuoi thang ");
	scanf("%f",&c);
	sd = c-n; 
	if (n>=0&&n<50) printf("tien dien can dong la %.3f dong",n*10000);
	if (n>=50&&n<100) printf("tien dien can dong la %.3f dong",n*15000);
	if (n>=100&&n<150) printf("tien dien can dong la %.3f dong",n*20000);
	if (n>=150&&n<200) printf("tien dien can dong la %.3f dong",n*25000);
	if (n>=200) printf("tien dien can dong la %.3f dong",n*30000);
	return 0;  
} 
