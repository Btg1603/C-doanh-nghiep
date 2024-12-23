#include<stdio.h>
int main(){
	int n,found=0,arr[5]={1,2,3,4,5};
	printf("nhap vao gia tri can tim: ");
	scanf("%d",&n);
	for (int i=0;i<5;i++){
		if (n==arr[i]){
		printf("phan tu nam tai vi tri arr[%d]",i);
		found=1;
		break; 
	}
	}
	 if (!found) 
        printf("Phan tu %d khong ton tai trong mang.\n", n);
		return 0; 
} 
