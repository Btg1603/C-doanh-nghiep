#include <stdio.h>
int main() {
    float base, height, area;   
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &base);
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &height);
    area = (base * height) / 2; 
    printf("Dien tich cua tam giac la: %.2f\n", area);
    return 0;
}
 
