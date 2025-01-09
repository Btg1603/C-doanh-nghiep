#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void nhapChuoi(char **str) {
    char buffer[1000];
    printf("Nhap vao chuoi: ");
    getchar(); // Xoa bo dem
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // Loai bo ky tu \n
    *str = (char *)malloc(strlen(buffer) + 1);
    if (*str == NULL) {
        printf("Khong the cap phat bo nho.\n");
        exit(1);
    }
    strcpy(*str, buffer);
}

void inChuoiDaoNguoc(char *str) {
    if (str == NULL) {
        printf("Chuoi chua duoc nhap.\n");
    } else {
        int len = strlen(str);
        printf("Chuoi dao nguoc: ");
        for (int i = len - 1; i >= 0; i--) {
            printf("%c", str[i]);
        }
        printf("\n");
    }
}

int demSoLuongTu(char *str) {
    if (str == NULL) {
        return 0;
    }
    int dem = 0;
    int trongTu = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            trongTu = 0;
        } else if (!trongTu) {
            trongTu = 1;
            dem++;
        }
    }
    return dem;
}

void soSanhChuoi(char *str, char *strKhac) {
    if (str == NULL || strKhac == NULL) {
        printf("Chuoi chua duoc nhap.\n");
        return;
    }
    int len1 = strlen(str);
    int len2 = strlen(strKhac);
    if (len1 > len2) {
        printf("Chuoi moi ngan hon chuoi ban dau.\n");
    } else if (len1 < len2) {
        printf("Chuoi moi dai hon chuoi ban dau.\n");
    } else {
        printf("Hai chuoi co do dai bang nhau.\n");
    }
}

void inHoaChuCai(char *str) {
    if (str == NULL) {
        printf("Chuoi chua duoc nhap.\n");
    } else {
        printf("Chuoi in hoa: ");
        for (int i = 0; str[i] != '\0'; i++) {
            printf("%c", toupper(str[i]));
        }
        printf("\n");
    }
}

void themChuoi(char **str, char *strThem) {
    if (*str == NULL || strThem == NULL) {
        printf("Chuoi chua duoc nhap.\n");
        return;
    }
    *str = (char *)realloc(*str, strlen(*str) + strlen(strThem) + 1);
    if (*str == NULL) {
        printf("Khong the cap phat bo nho.\n");
        exit(1);
    }
    strcat(*str, strThem);
    printf("Chuoi sau khi them: %s\n", *str);
}

int main() {
    char *str = NULL;
    char *strKhac = NULL;
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                if (str != NULL) {
                    free(str);
                    str = NULL;
                }
                nhapChuoi(&str);
                break;
            case 2:
                inChuoiDaoNguoc(str);
                break;
            case 3:
                if (str == NULL) {
                    printf("Chuoi chua duoc nhap.\n");
                } else {
                    printf("So luong tu: %d\n", demSoLuongTu(str));
                }
                break;
            case 4:
                if (strKhac != NULL) {
                    free(strKhac);
                    strKhac = NULL;
                }
                nhapChuoi(&strKhac);
                soSanhChuoi(str, strKhac);
                break;
            case 5:
                inHoaChuCai(str);
                break;
            case 6:
                if (strKhac != NULL) {
                    free(strKhac);
                    strKhac = NULL;
                }
                nhapChuoi(&strKhac);
                themChuoi(&str, strKhac);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (luaChon != 7);

    if (str != NULL) {
        free(str);
    }
    if (strKhac != NULL) {
        free(strKhac);
    }

    return 0;
}

