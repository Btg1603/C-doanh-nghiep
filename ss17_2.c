#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inputarr(char **str){
	printf("Nhap vao do dai toi da cua chuoi: ");
	int max;
	scanf("%d",&max);
	getchar();  // xoa bo nho dem 
	*str = (char*)malloc((max + 1)*sizeof(char));
	if (*str == NULL) {
        printf("Khong the cap phat bo nho.\n");
        exit(1);
    }
	printf("Nhap vao chuoi: ");
	fgets(*str, max + 1,stdin);
	(*str)[strcspn(*str,"\n")] = '\0'; 
}
void inChuoi(char *str) {
    if (str == NULL) {
        printf("Chuoi chua duoc nhap.\n");
    } else {
        printf("Chuoi da nhap: %s\n", str);
    }
}

int demChuCai(char *str) {
    int dem = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            dem++;
        }
    }
    return dem;
}

int demChuSo(char *str) {
    int dem = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            dem++;
        }
    }
    return dem;
}

int demKyTuDacBiet(char *str) {
    int dem = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))) {
            dem++;
        }
    }
    return dem;
}

int main() {
    char *str = NULL;
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                if (str != NULL) {
                    free(str);
                    str = NULL;
                }
                inputarr(&str);
                break;
            case 2:
                inChuoi(str);
                break;
            case 3:
                if (str == NULL) {
                    printf("Chuoi chua duoc nhap.\n");
                } else {
                    printf("So luong chu cai: %d\n", demChuCai(str));
                }
                break;
            case 4:
                if (str == NULL) {
                    printf("Chuoi chua duoc nhap.\n");
                } else {
                    printf("So luong chu so: %d\n", demChuSo(str));
                }
                break;
            case 5:
                if (str == NULL) {
                    printf("Chuoi chua duoc nhap.\n");
                } else {
                    printf("So luong ky tu dac biet: %d\n", demKyTuDacBiet(str));
                }
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (luaChon != 6);

    if (str != NULL) {
        free(str);
    }

    return 0;
}
 
