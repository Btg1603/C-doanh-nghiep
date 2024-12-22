#include<stdio.h>
#define maxsize 100 
int main(){
	int arr[maxsize];
	int n;
	int choice;
	do {
		printf("\nMENU\n");
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu \n");
		printf("2. In ra gia tri cac phan tu dang quan li\n");
		printf("3. In ra cac gia tri phan tu chan va tinh tong\n");
		printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
		printf("5. In ra cac phan tu la so nguyen to va tinh tong\n");
		printf("6. Nhap vao mot so va thong ke co bao nhieu phan tu do\n");
		printf("7. Them mot phan tu vao vi tri chi dinh\n");
		printf("8. Thoat \n");
		printf("Lua chon cua ban : ");
		scanf("%d",&choice);
		
		
		switch(choice){
			case 1:
				printf("Nhap so luong phan tu: ");
				scanf("%d",&n);
				if (n<=0||n>maxsize){
				printf("gia tri nhap khong hop le!!!");
				n=0;
				}else{
			        for(int i=0;i<n;i++){
					printf("nhap phan tu thu %d: ",i+1);
					scanf("%d",&arr[i]); 
				} 
				}
			break;
			case 2:
				if (n==0){
					printf("mang chua co phan tu nao \n"); 
				} else { printf("cac phan tu trong mang\n");
				for (int i=0; i<n ;i++){
					printf("%d ",arr[i]); 
				}
				printf("\n"); 
				} 
			break;
			case 3:
				if (n==0){
					printf("mang chua co phan tu nao\n"); 
				} else {
					int sum=0;
			        printf("cac phan tu chan\n");
				for (int i=0;i<n;i++){
					if(arr[i]%2==0){
						printf("%d ",arr[i]);
						sum+=arr[i];
					}
				} 
				printf("\n"); 
				printf("tong cac phan tu chan la: %d\n", sum);
				} 
			break;
			case 4:
				if(n==0){
				printf("mang chua co phan tu nao\n");
				}else{
					int min = arr[0];
					int max = arr[0];
					for (int i=1;i<n;i++){
					if(arr[i]<min)	min=arr[i];
					if(arr[i]>max)  max=arr[i];
					}
					printf("gia tri lon nhat : %d\n",max);
					printf("gia tri nho nhat : %d\n",min);
					
				}
			break;
			case 5:
    		if (n == 0) {
        	printf("Mang chua co phan tu nao\n");
    		} else {
       		 printf("Cac phan tu la so nguyen to:\n");
       		 int sum = 0;
        	for (int i = 0; i < n; i++) {
            int isPrime = 1; 
            if (arr[i] < 2) {
                isPrime = 0; 
            } else {
                for (int j = 2; j * j <= arr[i]; j++) {
                    if (arr[i] % j == 0) {
                        isPrime = 0; 
                        break;
                    }
                }
            }
            if (isPrime) {
                printf("%d ", arr[i]);
                sum += arr[i];
            }
        }
        printf("\nTong cac so nguyen to = %d\n", sum);
    }
    		break;
			case 6:
			if(n==0){
				printf("mang chua co phan tu nao\n");
				}else{
					int x,count=0;
					printf("nhap gia tri can thong ke: ");
					scanf("%d",&x);
					for (int i=0;i<n;i++){
					if(arr[i]==x) count++; 
			}
			printf("so lan xuat hien cua %d la %d\n",x,count); 
			}
			
			break;
			case 7:
				if(n==maxsize){
				
				printf("mang da day, khong the them nua!!!");
			}else{
				int index,value;
				printf("nhap vi tri can them: ");
				scanf("%d",&index);
				printf("nhap gia tri can them: ");
				scanf("%d",&value);
				if (index<0||index>n){
					printf("vi tri khong hop le\n "); 
				} else{
					for (int i=n;i>index;i--){
						arr[i]=arr[i-1]; 
					} 
					arr[index]=value;
					n++;
					printf("them thanh cong!!!\n"); 
				} 
			} 
			break;
			case 8:
				printf("thoat chuong trinh"); 
			break;
			default:
			printf("Lua chon khong hop le, vui long nhap lai"); 
		} 
}while (choice!=8);
return 0;
}
  
