#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Cau truc sach
typedef struct {
    int maSach;
    char tenSach[100];
    char tacGia[50];
    float giaTien;
    char theLoai[50];
} Sach;

Sach books[MAX_BOOKS];
int currentLength = 0;

// Hien thi danh sach sach
void hienThiSach() {
    printf("\nDanh sach sach:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("Ma: %d, Ten: %s, Tac gia: %s, Gia: %.2f, The loai: %s\n", 
               books[i].maSach, books[i].tenSach, books[i].tacGia, books[i].giaTien, books[i].theLoai);
    }
}

// Nhap thong tin sach
void nhapSach() {
    printf("\nNhap so luong sach: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (currentLength >= MAX_BOOKS) {
            printf("\nDanh sach da day!\n");
            return;
        }
        printf("\nNhap ma sach: ");
        scanf("%d", &books[currentLength].maSach);
        printf("Nhap ten sach: ");
        scanf(" %[^"]s", books[currentLength].tenSach);
        printf("Nhap tac gia: ");
        scanf(" %[^"]s", books[currentLength].tacGia);
        printf("Nhap gia tien: ");
        scanf("%f", &books[currentLength].giaTien);
        printf("Nhap the loai: ");
        scanf(" %[^"]s", books[currentLength].theLoai);
        currentLength++;
    }
    printf("\nDa nhap sach thanh cong!\n");
}

// Xoa sach theo ma sach
void xoaSach() {
    int ma, found = -1;
    printf("\nNhap ma sach can xoa: ");
    scanf("%d", &ma);
    for (int i = 0; i < currentLength; i++) {
        if (books[i].maSach == ma) {
            found = i;
            break;
        }
    }
    if (found == -1) {
        printf("\nKhong tim thay sach!\n");
        return;
    }
    for (int i = found; i < currentLength - 1; i++) {
        books[i] = books[i + 1];
    }
    currentLength--;
    printf("\nDa xoa sach thanh cong!\n");
}

// Sap xep sach theo gia
void sapXepSach() {
    for (int i = 0; i < currentLength - 1; i++) {
        for (int j = i + 1; j < currentLength; j++) {
            if (books[i].giaTien > books[j].giaTien) {
                Sach temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
    printf("\nDa sap xep sach theo gia tang dan.\n");
}

// Tim kiem sach theo ten
void timKiemSach() {
    char ten[100];
    printf("\nNhap ten sach can tim: ");
    scanf(" %[^"]s", ten);
    printf("\nKet qua tim kiem:\n");
    for (int i = 0; i < currentLength; i++) {
        if (strstr(books[i].tenSach, ten)) {
            printf("Ma: %d, Ten: %s, Tac gia: %s, Gia: %.2f, The loai: %s\n", 
                   books[i].maSach, books[i].tenSach, books[i].tacGia, books[i].giaTien, books[i].theLoai);
        }
    }
}

int main() {
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Xoa sach theo ma sach\n");
        printf("4. Sap xep sach theo gia\n");
        printf("5. Tim kiem sach theo ten\n");
        printf("6. Thoat\n");
        printf("\nLua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: nhapSach(); break;
            case 2: hienThiSach(); break;
            case 3: xoaSach(); break;
            case 4: sapXepSach(); break;
            case 5: timKiemSach(); break;
            case 6: printf("\nThoat chuong trinh.\n"); break;
            default: printf("\nLua chon khong hop le!\n");
        }
    } while (choice != 6);
    
    return 0;
}

