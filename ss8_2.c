#include<stdio.h>
int main(){
	int n,l;
	int arr[5]={1,2,3,4,5};
	printf("nhap phan tu muon tim kiem: ");
	scanf("%d",&l); 
	for (int i = 0 ; i < n ; i++){
	if(l==arr[i]) printf("vi tri phan tu trong mang la arr[%d]",i);
	else	printf ("phan tu khong ton tai trong mang");
}
} 
