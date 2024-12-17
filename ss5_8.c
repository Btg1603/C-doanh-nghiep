#include<stdio.h>
int main(){
	int n1,n2,temp,tich;
	printf("nhap so thu 1: ");
	scanf("%d",&n1);
	printf("nhap so thu 2: ");
	scanf("%d",&n2);
	tich=n1*n2; 
	if (n1>n2){
	do{
	temp=n2;
	n2=n1%n2;
	n1=temp; 
}while(n2!=0); 
printf("boi chung nho nhat cua hai so  la %d",tich/n1);		
	}		
	 
	if (n1<n2){
	do{
	temp=n1;
	n1=n2%n1;
	n2=temp; 
}while(n1!=0); 
printf("boi chung nho nhat cua hai so  la %d",tich/n2); 
}

}
