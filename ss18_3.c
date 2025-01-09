#include <stdio.h>
#include <string.h>

// Ð?nh ngh?a c?u trúc SinhVien
struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai báo m?ng sinh viên v?i 5 ph?n t?
    struct SinhVien svArray[5];

    // Nh?p thông tin cho t?ng sinh viên
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        
        // Nh?p tên
        printf("Nhap ten: ");
        fflush(stdin); // Xóa b? nh? ð?m
        fgets(svArray[i].name, sizeof(svArray[i].name), stdin);
        svArray[i].name[strcspn(svArray[i].name, "\n")] = '\0'; // Xóa k? t? xu?ng d?ng
        
        // Nh?p tu?i
        printf("Nhap tuoi: ");
        scanf("%d", &svArray[i].age);

        // Nh?p s? ði?n tho?i
        printf("Nhap so dien thoai: ");
        fflush(stdin);
        fgets(svArray[i].phoneNumber, sizeof(svArray[i].phoneNumber), stdin);
        svArray[i].phoneNumber[strcspn(svArray[i].phoneNumber, "\n")] = '\0'; // Xóa k? t? xu?ng d?ng

        printf("\n");
    }

    // In thông tin các sinh viên
    printf("Thong tin cac sinh vien da nhap:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", svArray[i].name);
        printf("Tuoi: %d\n", svArray[i].age);
        printf("So Dien Thoai: %s\n", svArray[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

