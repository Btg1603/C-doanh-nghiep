#include <stdio.h> 

int main() {
	int n;
	printf("nhap so nguyen bat ki ");
	scanf("%d",&n);
	if (n<1){
		printf("khong phai so nguyen to");
		}else {
			for (int i=2;i*i<=n;i++){
				if (n % i == 0) 
				printf ("khong la so nguyen to"); 
				else printf ("la so nguyen to");
				return 0;13  
			} 
		}
		return 0;  
	} 

