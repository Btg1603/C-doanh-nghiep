#include<stdio.h>
int main(){

int a,b,c,temp;
printf("nhap so thu 1: ");
scanf("%d",&a);
printf("nhap so thu 2: ");
scanf("%d",&b);
printf("nhap so thu 3: ");
scanf("%d",&c);
 if (a > b) {
  temp = a;
   a = b;
    b = temp;
	 }
	  if (a > c) {
	   temp = a;
	    a = c;
		 c = temp;
		  } 
		  if (b > c) {
		   temp = b;
		    b = c;
			 c = temp;
			  }
			  printf("Thu tu tu nho den lon: %d %d %d\n", a, b, c); 
			  return 0;
}
