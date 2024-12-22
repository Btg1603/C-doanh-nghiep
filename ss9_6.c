#include <stdio.h>

#define MAX 100

// Hàm nh?p m?ng
void nhapMang(int arr[MAX][MAX], int *m, int *n) {
    printf("Nhap so dong: ");
    scanf("%d", m);
    printf("Nhap so cot: ");
    scanf("%d", n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < *m; i++) {
        for (int j = 0; j < *n; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Hàm in m?ng theo ma tr?n
void inMaTran(int arr[MAX][MAX], int m, int n) {
    printf("Cac phan tu cua mang theo ma tran:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Hàm in các ph?n t? l? và tính t?ng
void inVaTinhTongLe(int arr[MAX][MAX], int m, int n) {
    int tong = 0;
    printf("Cac phan tu le:");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 != 0) {
                printf(" %d", arr[i][j]);
                tong += arr[i][j];
            }
        }
    }
    printf("\nTong cac phan tu le: %d\n", tong);
}

// Hàm in các ph?n t? trên ðý?ng biên và tính tích
void inVaTinhTichBien(int arr[MAX][MAX], int m, int n) {
    int tich = 1;
    printf("Cac phan tu tren duong bien:");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                printf(" %d", arr[i][j]);
                tich *= arr[i][j];
            }
        }
    }
    printf("\nTich cac phan tu tren duong bien: %d\n", tich);
}

// Hàm in các ph?n t? trên ðý?ng chéo chính
void inCheoChinh(int arr[MAX][MAX], int m, int n) {
    printf("Cac phan tu tren duong cheo chinh:");
    for (int i = 0; i < m && i < n; i++) {
        printf(" %d", arr[i][i]);
    }
    printf("\n");
}

// Hàm in các ph?n t? trên ðý?ng chéo ph?
void inCheoPhu(int arr[MAX][MAX], int m, int n) {
    printf("Cac phan tu tren duong cheo phu:");
    for (int i = 0; i < m && i < n; i++) {
        printf(" %d", arr[i][n - i - 1]);
    }
    printf("\n");
}

// Hàm t?m d?ng có t?ng l?n nh?t
void inDongTongLonNhat(int arr[MAX][MAX], int m, int n) {
    int maxTong = -1, dongMax = -1;
    for (int i = 0; i < m; i++) {
        int tong = 0;
        for (int j = 0; j < n; j++) {
            tong += arr[i][j];
        }
        if (tong > maxTong) {
            maxTong = tong;
            dongMax = i;
        }
    }
    printf("Dong co tong lon nhat la dong %d: tong = %d\n", dongMax + 1, maxTong);
}

int main() {
    int arr[MAX][MAX], m = 0, n = 0;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &m, &n);
                break;
            case 2:
                inMaTran(arr, m, n);
                break;
            case 3:
                inVaTinhTongLe(arr, m, n);
                break;
            case 4:
                inVaTinhTichBien(arr, m, n);
                break;
            case 5:
                inCheoChinh(arr, m, n);
                break;
            case 6:
                inCheoPhu(arr, m, n);
                break;
            case 7:
                inDongTongLonNhat(arr, m, n);
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}
