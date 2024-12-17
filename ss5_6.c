#include<stdio.h>
int main(){
	int n1,n2,n;
	printf("CALCULATOR\n\n");
	printf("1. Tong hai so\n");
	printf("2. Hieu hai so\n");
	printf("3. Tich hai so\n");
	printf("4. Thuong hai so\n");
	printf("5. Thoat\n");
	do{
		printf("\n\n");
	printf("Lua chon cua ban: ");
	scanf("%d",&n);
	if (n==5) return 0;
	if (n<1||n>5) printf("gia tri khong hop le"); 
	printf("nhap so thu 1\n");
	scanf("%d",&n1);
	printf("nhap so thu 2\n");
	scanf("%d",&n2);
	switch(n){
		case 1:
		printf("tong hai so la %d\n",n1+n2);
		break;
		case 2:
		printf("hieu hai so la %d\n",n1-n2);
		break; 
		case 3:
		printf("tich hai so la %d\n",n1*n2);
		break; 
		case 4:
			if (n1==0||n2==0)
			printf("math error");
			else  
		printf("thuong hai so la %d\n",n1/n2);
		break;  
	}
}while (n<=4);
return 0; 
	  
} 
