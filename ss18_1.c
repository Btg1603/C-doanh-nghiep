#include <stdio.h>
#include <string.h>

// Ð?nh ngh?a c?u trúc SinhVien
struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai báo bi?n t? c?u trúc và gán giá tr?
    struct SinhVien sv;

    // Gán giá tr? cho các thu?c tính
    strcpy(sv.name, "Nguyen Van A");
    sv.age = 20;
    strcpy(sv.phoneNumber, "0123456789");

    // In thông tin sinh viên ra màn h?nh
    printf("Thong tin sinh vien:\n");
    printf("Name: %s\n", sv.name);
    printf("Age: %d\n", sv.age);
    printf("Phone Number: %s\n", sv.phoneNumber);

    return 0;
}

