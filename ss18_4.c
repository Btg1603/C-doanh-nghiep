#include <stdio.h>
#include <string.h>

// Dinh nghia cau truc SinhVien
struct SinhVien {
    int id;             // ID tu dong tang
    char name[50];      // Ten
    int age;            // Tuoi
    char phoneNumber[15]; // So dien thoai
};

int main() {
    // Khai bao mang sinh vien voi 50 phan tu
    struct SinhVien svArray[50];
    int n = 5; // So sinh vien can nhap (co the thay doi neu can)

    // Nhap thong tin cho 5 sinh vien
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);

        // Tu dong gan ID
        svArray[i].id = i + 1;

        // Nhap ten
        printf("Nhap ten: ");
        fflush(stdin); // Xoa bo nho dem
        fgets(svArray[i].name, sizeof(svArray[i].name), stdin);
        svArray[i].name[strcspn(svArray[i].name, "\n")] = '\0'; // Xoa ky tu xuong dong

        // Nhap tuoi
        printf("Nhap tuoi: ");
        scanf("%d", &svArray[i].age);

        // Nhap so dien thoai
        printf("Nhap so dien thoai: ");
        fflush(stdin); // Xoa bo nho dem
        fgets(svArray[i].phoneNumber, sizeof(svArray[i].phoneNumber), stdin);
        svArray[i].phoneNumber[strcspn(svArray[i].phoneNumber, "\n")] = '\0'; // Xoa ky tu xuong dong

        printf("\n");
    }

    // In thong tin cac sinh vien
    printf("Thong tin cac sinh vien da nhap:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", svArray[i].id);
        printf("Ten: %s\n", svArray[i].name);
        printf("Tuoi: %d\n", svArray[i].age);
        printf("So Dien Thoai: %s\n", svArray[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

