#include <stdio.h>
#include <string.h>

// �?nh ngh?a c?u tr�c SinhVien
struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai b�o bi?n t? c?u tr�c v� g�n gi� tr?
    struct SinhVien sv;

    // G�n gi� tr? cho c�c thu?c t�nh
    strcpy(sv.name, "Nguyen Van A");
    sv.age = 20;
    strcpy(sv.phoneNumber, "0123456789");

    // In th�ng tin sinh vi�n ra m�n h?nh
    printf("Thong tin sinh vien:\n");
    printf("Name: %s\n", sv.name);
    printf("Age: %d\n", sv.age);
    printf("Phone Number: %s\n", sv.phoneNumber);

    return 0;
}

