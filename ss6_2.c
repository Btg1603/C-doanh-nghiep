#include<stdio.h>
 int main  (){
 int a,sum;
 for(int i=1;i<6;i++){
 	printf("nhap so nguyen ");
	 scanf("%d",&a);
	 if (a%2!=0) 
	 sum++; 
 }
printf("so le la %d\n",sum);
printf("so chan la %d\n",5-sum);
return 0;  
}
