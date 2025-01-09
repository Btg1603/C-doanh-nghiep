#include <stdio.h>
#include <string.h>

// �?nh ngh?a c?u tr�c SinhVien
struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai b�o m?ng sinh vi�n v?i 5 ph?n t?
    struct SinhVien svArray[5];

    // Nh?p th�ng tin cho t?ng sinh vi�n
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        
        // Nh?p t�n
        printf("Nhap ten: ");
        fflush(stdin); // X�a b? nh? �?m
        fgets(svArray[i].name, sizeof(svArray[i].name), stdin);
        svArray[i].name[strcspn(svArray[i].name, "\n")] = '\0'; // X�a k? t? xu?ng d?ng
        
        // Nh?p tu?i
        printf("Nhap tuoi: ");
        scanf("%d", &svArray[i].age);

        // Nh?p s? �i?n tho?i
        printf("Nhap so dien thoai: ");
        fflush(stdin);
        fgets(svArray[i].phoneNumber, sizeof(svArray[i].phoneNumber), stdin);
        svArray[i].phoneNumber[strcspn(svArray[i].phoneNumber, "\n")] = '\0'; // X�a k? t? xu?ng d?ng

        printf("\n");
    }

    // In th�ng tin c�c sinh vi�n
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

