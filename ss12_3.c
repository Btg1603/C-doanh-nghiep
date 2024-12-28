#include<stdio.h>
long giaithua(int n){
int ketqua=1; 
for (int i=1;i<=n;i++){
	ketqua*=i;
}
return ketqua; 
}
int main(){
	int n;
	printf("nhap vao mot so nguyen duong: ");
	scanf("%d",&n);
	if (n<0){
 printf("giai thua khong xac dinh cho so am");
	}else{
		printf("giai thua cua %d = %d",n,giaithua(n)); 
	}
	return 0;  
} 
