#include <stdio.h>

int main() {
    int n;

    printf("Nhap so hang va cot ");
    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int temp=0; 
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){		
	 
            if (i==0||i==n-1||j==0||j==n-1){
            		printf("%d ", matrix[i][j]);
            	temp+=matrix[i][j]; 
			} else
			printf("  "); 
        }
        printf("\n"); 
    }
    
    printf("tong gia tri tren duong bien la %d",temp);

    return 0;
}

