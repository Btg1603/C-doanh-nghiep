#include <stdio.h>

int main() {
    int n;

    printf("Nhập số hàng và cột của ma trận vuông: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Nhập giá trị cho ma trận
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhập giá trị cho phần tử [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int temp = 0;

    // In và tính tổng đường chéo phụ
    printf("Các phần tử trên đường chéo phụ là:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - i - 1]); // Phần tử trên đường chéo phụ
        temp += matrix[i][n - i - 1];       // Tính tổng
    }

    printf("\nTổng giá trị đường chéo phụ là: %d\n", temp);

    return 0;
}
