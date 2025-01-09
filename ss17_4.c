#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void nhapMang(int **arr, int *n) {
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);

    *arr = (int *)malloc((*n) * sizeof(int));
    if (*arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        exit(1);
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < *n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}

void inSoChan(int *arr, int n) {
    printf("Cac so chan trong mang: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void inSoNguyenTo(int *arr, int n) {
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void daoNguocMang(int *arr, int n) {
    printf("Mang sau khi dao nguoc: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sapXepMang(int *arr, int n, bool tangDan) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((tangDan && arr[i] > arr[j]) || (!tangDan && arr[i] < arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void timKiemPhanTu(int *arr, int n, int x) {
    bool timThay = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d xuat hien o vi tri %d.\n", x, i + 1);
            timThay = true;
        }
    }
    if (!timThay) {
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    }
}

int main() {
    int *arr = NULL;
    int n = 0;
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                if (arr != NULL) {
                    free(arr);
                    arr = NULL;
                }
                nhapMang(&arr, &n);
                break;
            case 2:
                if (arr == NULL) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    inSoChan(arr, n);
                }
                break;
            case 3:
                if (arr == NULL) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    inSoNguyenTo(arr, n);
                }
                break;
            case 4:
                if (arr == NULL) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    daoNguocMang(arr, n);
                }
                break;
            case 5:
                if (arr == NULL) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    int luaChonSapXep;
                    printf("1. Tang dan\n");
                    printf("2. Giam dan\n");
                    printf("Lua chon cua ban: ");
                    scanf("%d", &luaChonSapXep);
                    if (luaChonSapXep == 1) {
                        sapXepMang(arr, n, true);
                    } else if (luaChonSapXep == 2) {
                        sapXepMang(arr, n, false);
                    } else {
                        printf("Lua chon khong hop le.\n");
                    }
                }
                break;
            case 6:
                if (arr == NULL) {
                    printf("Mang chua duoc nhap.\n");
                } else {
                    int x;
                    printf("Nhap phan tu can tim: ");
                    scanf("%d", &x);
                    timKiemPhanTu(arr, n, x);
                }
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (luaChon != 7);

    if (arr != NULL) {
        free(arr);
    }

    return 0;
}

