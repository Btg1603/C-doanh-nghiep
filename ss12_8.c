#include<stdio.h>
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
} 
int main(){
	int a,b,result=0; 
	printf("nhap so thu 1: ");
	scanf("%d",&a);
	printf("nhap so thu 2: ");
	scanf("%d",&b); 
	result=ucln(a,b); 
	printf("uoc chung lon nhat cua hai so la %d: ",result);
	return 0; 
} 
