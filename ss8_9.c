#include<stdio.h>
int main(){
	int n,temp=0,save=0;
	printf("nhap vao so phan tu ");
	scanf("%d",&n);
	int arr[n];
	int ar2[n];
	
	 
	for (int i = 0 ; i < n ; i++){
		printf("nhap phan tu thu %d ",i+1);
		scanf("%d",&arr[i]); 	
	} 
	
	
//so sanh tung phan tu trong mang voi nhau	
	for (int i=0 ; i < n; i++){
	temp=i;
	save=ar2[i];
	save=0; 			
			for (int i=0 ; j < n; i++){
			if (arr[temp]==arr[j])
			save+=1;  
	} 
// in ra mang 
for (int i=0 ; j < n; i++){
printf("%d ",arr[i]);	
}


//so sanh so phan tu xuat hien nhieu nhat 
	temp=0;
	temp=ar2[0]; 
    for (int i = 0; i < n; i++) {
		if (temp < ar2[i]) 
		temp = ar2[i];           
        } 		
		 
//tim vi tri cua phan tu xuat hien nhieu nhat trong arr[]    
    int i_ar2=0; 
	for (int i = 0; i < n; i++) {
        if (ar2[i] == temp) {
            i_ar2=i+1; 
            break;
		}
}
    printf("phan tu xuat hien nhieu nhat la %d",arr[i_ar2]); 
} 
