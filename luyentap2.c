#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100

// Cau truc san pham
typedef struct {
    int maSP;
    char tenSP[100];
    float giaNhap;
    float giaBan;
    int soLuong;
} SanPham;

SanPham products[MAX_PRODUCTS];
int currentLength = 0;
float doanhThu = 0;

// Hien thi danh sach san pham
void hienThiSanPham() {
    printf("\nDanh sach san pham:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("Ma: %d, Ten: %s, Gia nhap: %.2f, Gia ban: %.2f, So luong: %d\n", 
               products[i].maSP, products[i].tenSP, products[i].giaNhap, products[i].giaBan, products[i].soLuong);
    }
}

// Nhap san pham
void nhapSanPham() {
    printf("\nNhap so luong san pham: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (currentLength >= MAX_PRODUCTS) {
            printf("\nDanh sach da day!\n");
            return;
        }
        printf("\nNhap ma san pham: ");
        int maSP;
        scanf("%d", &maSP);
        for (int j = 0; j < currentLength; j++) {
            if (products[j].maSP == maSP) {
                printf("Nhap so luong them: ");
                int themSoLuong;
                scanf("%d", &themSoLuong);
                products[j].soLuong += themSoLuong;
                doanhThu -= themSoLuong * products[j].giaNhap;
                printf("\nDa cap nhat so luong san pham!\n");
                return;
            }
        }
        products[currentLength].maSP = maSP;
        printf("Nhap ten san pham: ");
        scanf(" %[^"]s", products[currentLength].tenSP);
        printf("Nhap gia nhap: ");
        scanf("%f", &products[currentLength].giaNhap);
        printf("Nhap gia ban: ");
        scanf("%f", &products[currentLength].giaBan);
        printf("Nhap so luong: ");
        scanf("%d", &products[currentLength].soLuong);
        doanhThu -= products[currentLength].soLuong * products[currentLength].giaNhap;
        currentLength++;
    }
    printf("\nDa nhap san pham thanh cong!\n");
}

// Ban san pham
void banSanPham() {
    int ma, soLuongBan;
    printf("\nNhap ma san pham can ban: ");
    scanf("%d", &ma);
    for (int i = 0; i < currentLength; i++) {
        if (products[i].maSP == ma) {
            printf("Nhap so luong can ban: ");
            scanf("%d", &soLuongBan);
            if (soLuongBan > products[i].soLuong) {
                printf("\nKhong con du hang!\n");
                return;
            }
            products[i].soLuong -= soLuongBan;
            doanhThu += soLuongBan * products[i].giaBan;
            printf("\nDa ban hang thanh cong!\n");
            return;
        }
    }
    printf("\nKhong tim thay san pham!\n");
}

// Xem doanh thu
void xemDoanhThu() {
    printf("\nDoanh thu hien tai: %.2f\n", doanhThu);
}

int main() {
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap san pham\n");
        printf("2. Hien thi san pham\n");
        printf("3. Ban san pham\n");
        printf("4. Xem doanh thu\n");
        printf("5. Thoat\n");
        printf("\nLua chon cua ban: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: nhapSanPham(); break;
            case 2: hienThiSanPham(); break;
            case 3: banSanPham(); break;
            case 4: xemDoanhThu(); break;
            case 5: printf("\nThoat chuong trinh.\n"); break;
            default: printf("\nLua chon khong hop le!\n");
        }
    } while (choice != 5);
    
    return 0;
}
