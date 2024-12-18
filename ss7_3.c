#include<stdio.h>
int main(){	
	int arr[5],t=0;
	for (int i = 0 ; i < 5 ; i++){
		printf("nhap phan tu thu %d = ",i+1);
		scanf("%d",&arr[i]); 	
	}
	printf("Cac phan tu so chan trong mang la:\n"); 
	for (int i = 0; i < 5; i++) {
	if (arr[i] % 2==0){ 
	printf("%d\n",arr[i]);
	t+=1; 
	}else if(t==0) {
	printf("khong co so chan "); 
	return 0; 
}
}
}
