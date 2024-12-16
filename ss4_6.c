#include <stdio.h>

int main() {
    int so_cu, so_moi, so_dien;
    int tien_dien = 0;

    printf("Nhap chi so cu: ");
    scanf("%d", &so_cu);
    printf("Nhap chi so moi: ");
    scanf("%d", &so_moi);
    so_dien = so_moi - so_cu;
    if (so_dien < 0) {
        printf("Chi so moi khong hop le!\n");
        return 1;
    }
    if (so_dien > 200) {
        tien_dien += (so_dien - 200) * 30000;
        so_dien = 200;
    }
    if (so_dien > 150) {
        tien_dien += (so_dien - 150) * 25000;
        so_dien = 150;
    }
    if (so_dien > 100) {
        tien_dien += (so_dien - 100) * 20000;
        so_dien = 100;
    }
    if (so_dien > 50) {
        tien_dien += (so_dien - 50) * 15000;
        so_dien = 50;
    }
    if (so_dien > 0) {
        tien_dien += so_dien * 10000;
    }
    printf("Tien dien can thanh toan: %d VND\n", tien_dien);

    return 0;
}
