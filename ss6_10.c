#include <stdio.h> 

int main() {
	int flag=1,n;
	printf("nhap so nguyen bat ki ");
	scanf("%d",&n);
	if (n<2){
		printf("khong phai so nguyen to");
		}else {
			for (int i=2;i*i<=n;i++){
				if (n % i == 0) 
				flag=0;
				break;  
			} 
		}
	if(flag) printf("la so nguyen to");
	else printf("khong la so nguyen to");
		return 0;  
	} 

