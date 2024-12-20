#include<stdio.h>
 int main  (){
 int a,sum;
 for(int i=1;i<6;i++){
 	printf("nhap so nguyen ");
	 scanf("%d",&a);
	 if (a%2!=0) 
	 sum+=a; 
 }
 printf("t?n cac so le la %d",sum);
 return 0;  
}
