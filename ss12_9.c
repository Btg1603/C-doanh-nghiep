#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Hàm in menu
void printMenu() {
    printf("\nMENU:\n");
    printf("1. Nhap gia tri cac phan tu cua mang\n");
    printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
    printf("3. In ra cac phan tu goc theo ma tr?n\n");
    printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
    printf("5. In ra cac phun tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
    printf("6. In ra cac phan tu la so nguyen tu theo ma tran\n");
    printf("7. Thoat\n");
}

int main() {
    int n, m;
    int matrix[100][100]; 
    int choice;

    do {
        printMenu();
        printf("\nNhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("\nNhap so hang n: ");
                scanf("%d", &n);
                printf("Nhap so cot m: ");
                scanf("%d", &m);

                printf("\nNhap cac phan tu cua ma tran:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("matrix[%d][%d] = ", i, j);
                        scanf("%d", &matrix[i][j]);
                    }
                }
                break;
            }

            case 2: {
                printf("\nMa tran:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("%d ", matrix[i][j]);
                    }
                    printf("\n");
                }
                break;
            }

            case 3: {
                printf("\nCac phan tu goc cua ma tran:\n");
                printf("%d %d\n", matrix[0][0], matrix[0][m - 1]);
                printf("%d %d\n", matrix[n - 1][0], matrix[n - 1][m - 1]);
                break;
            }

            case 4: {
                printf("\nCac phan tu tren duong bien cua ma tran:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                            printf("%d ", matrix[i][j]);
                        }
                    }
                }
                printf("\n");
                break;
            }

            case 5: {
                printf("\nCac phan tu tren duong cheo chinh va cheo phu:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (i == j || i + j == m - 1) {
                            printf("%d ", matrix[i][j]);
                        }
                    }
                }
                printf("\n");
                break;
            }

            case 6: {
                printf("\nCac phan tu la so nguyen to trong ma tran:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (isPrime(matrix[i][j])) {
                            printf("%d ", matrix[i][j]);
                        }
                    }
                }
                printf("\n");
                break;
            }

            case 7: {
                printf("\nThoat chuong trinh.\n");
                break;
            }

            default: {
                printf("\nLua chon khong hop le. Vui long thu lai.\n");
                break;
            }
        }
    } while (choice != 7);

    return 0;
}

