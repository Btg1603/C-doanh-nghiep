#include<stdio.h>
#include<stdlib.h>

void inputarr(int **arr, int *n){
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",n);
	// cap phat bo nho
	*arr = (int *)malloc(*n*sizeof(int));
	if (*arr==NULL){
		printf("Khong the cap phat bo nho");
		exit(1); 
	} 
	for (int i=0;i<*n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&(*arr)[i]);
		 
	} 
		
	
}
void displayarr(int *arr,int n){
	printf("cac phan tu trong mang: ");
	for  (int i=0;i<n;i++){
		printf("%d ",arr[i]); 
	} 
	printf("\n"); 
} 
int lengharr(int n){
	return n; 
} 
int sumarr(int *arr,int n){
	int sum=0;
	for (int i=0;i<n;i++){
		sum+=arr[i]; 
	} 
	return sum; 
} 
int maxvalue(int *arr,int n){
	int max=arr[0];
	for (int i =1;i<n;i++){
		if (arr[i]>max){
			max=arr[i]; 
		} 
	} 
	return max; 
}
int main(){
	int *arr=NULL;
	int n=0;
	int choice;
	
	do{
	printf("\nMENU\n");
    printf("1. Nhap vao so phan tu va tung phan tu\n");
    printf("2. Hien thi cac phan tu trong mang\n");
    printf("3. Tinh do dai mang\n");
    printf("4. Tinh tong cac phan tu trong mang\n");
    printf("5. Hien thi phan tu lon nhat\n");
    printf("6. Thoat\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);
	switch (choice)	{
		case 1:
		if (arr != NULL){
			free(arr);
			arr=NULL; 
		} 
		inputarr(&arr,&n);
		break;
		case 2:
		if (arr == NULL){
			printf("Mang chua duoc nhap.\n"); 
		}else {
			displayarr(arr,n); 
		}
		break;
		case 3:
		if (arr==NULL){
			printf("Mang chua duoc nhap.\n"); 
		}else {
			printf("Do dai mang = %d\n",lengharr(n));
			 
		}
		break;
		case 4:
		if (arr == NULL){
			printf("Mang chua duoc nhap\n"); 
		}else{
			printf("Tong cac phan tu trong mang la: %d\n",sumarr(arr,n));
			 
		}
		break;
		case 5:
		if (arr == NULL){
			printf("Mang chua duoc nhap\n"); 
		}else{
			printf("Phan tu lon nhat trong mang la: %d\n",maxvalue(arr,n)); 
		}
		break;
		case 6:
		printf("Thoat chuong trinh\n");
		break;
		default:
		printf("Lua chon khong hop le. Vui long nhap lai!!!\n");   
	}
}while(choice!=6);
	if (arr != NULL){
		free(arr); 
	} 
	return 0; 
}

 
