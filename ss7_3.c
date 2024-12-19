#include<stdio.h>
int main(){	
	int arr[5],flag=0;
	for (int i = 0 ; i < 5 ; i++){
		printf("nhap phan tu thu %d = ",i+1);
		scanf("%d",&arr[i]); 	
	}
	printf("Cac phan tu so chan trong mang la:\n"); 
	for (int i = 0; i < 5; i++) {
	if (arr[i] % 2==0){
	flag=1;
	printf("%d\n",arr[i]);
	 
	}else if(flag!=1) {
	printf("khong co so chan "); 
	return 0; 
}
}
}
