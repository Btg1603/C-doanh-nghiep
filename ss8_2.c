#include<stdio.h>
int main(){
	int n,l,flag=0;
	int arr[5]={1,2,3,4,5};
	printf("nhap phan tu muon tim kiem: ");
	scanf("%d",&l); 
	for (int i = 0 ; i < n ; i++){
	if(l==arr[i])
	printf("vi tri phan tu trong mang la arr[%d]",i);
	flag=1;
}
	 if (!flag) {
        printf("Phần tử không tồn tại trong mảng.\n");
} 
