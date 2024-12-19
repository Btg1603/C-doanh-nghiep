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
	temp=matrix[0][0]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
		if (temp < matrix[i][j]) 
		temp = matrix[i][j];            
        }  
    }
    printf("gia tri lon nhat trong mang la %d",temp);

    return 0;
}

