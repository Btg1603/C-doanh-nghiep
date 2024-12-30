#include <stdio.h>


void createMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Nhap cac gia tri cho ma tran (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Ma tran vua nhap:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;


    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

  
    int matrix[rows][cols];

  
    createMatrix(rows, cols, matrix);
    printMatrix(rows, cols, matrix);

    return 0;
}

