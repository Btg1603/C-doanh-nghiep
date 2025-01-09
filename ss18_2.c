#include <stdio.h>
#include <string.h>

// Dinh nghia cau truc SinhVien
struct SinhVien {
    char ten[50];
    int tuoi;
    char soDienThoai[15];
};

int main() {
    // Khai bao bien tu cau truc va gan gia tri
    struct SinhVien sv;

    // Gan gia tri cho cac thuoc tinh
    strcpy(sv.ten, "Nguyen Van A");
    sv.tuoi = 20;
    strcpy(sv.soDienThoai, "0123456789");

    // In thong tin sinh vien ra man hinh
    printf("Thong tin sinh vien:\n");
    printf("Ten: %s\n", sv.ten);
    printf("Tuoi: %d\n", sv.tuoi);
    printf("So Dien Thoai: %s\n", sv.soDienThoai);

    return 0;
}

