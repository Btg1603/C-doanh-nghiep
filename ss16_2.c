#include<stdio.h>
void swap (int *in1, int *in2){
	int temp=0;
	temp=*in1;
	*in1=*in2;
	*in2=temp;
}
int main(){
	int num1=10;
	int num2=12;
	printf("truoc khi thay doi num1=%d num2=%d\n",num1,num2);
	swap(&num1,&num2);
	printf("sau khi thay doi num1=%d num2=%d\n",num1,num2);
}
