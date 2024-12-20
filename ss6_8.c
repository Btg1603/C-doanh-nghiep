#include <stdio.h>
#include <math.h>

int main() {
    double tien_goc, lai_suat, tong_tien, tien_lai;
    int so_thang;

    printf("Nhap so tien ban dau: ");
    scanf("%lf", &tien_goc);

    printf("Nhap lai suat (%%): ");
    scanf("%lf", &lai_suat);
    lai_suat /= 100; 

    printf("Nhap so thang gui: ");
    scanf("%d", &so_thang);

    tong_tien = tien_goc * pow(1 + lai_suat, so_thang);
    tien_lai = tong_tien - tien_goc;

    printf("Tien lai: %.3f\n", tien_lai);
    printf("Tien nhan duoc: %.3f\n", tong_tien);

    return 0;
}

