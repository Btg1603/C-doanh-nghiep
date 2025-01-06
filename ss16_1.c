#include<stdio.h>
int main(){
	int x=9;
	int *xPtr=&x;
	printf("Gia tri cua x la: %d\n",*xPtr);
	printf("Dia chi cua x la: %lu\n",&x);
	printf("Gia tri cua x la: %d\n",x);
	printf("Dia chi cua x la: %lu\n",xPtr);
}
