#include<stdio.h>
int main(){
	int n,s,i;
do{
	printf("nhap vao mot so nguyen duong: ");
	scanf("%d",&n);
	if (n<0)
	printf("gia tri khong hop le\n");
}
	while (n<0);
for (i=0;i<=n;i++){
	s+=i; 
}
printf("tong= %d",s);	 
		 
} 
