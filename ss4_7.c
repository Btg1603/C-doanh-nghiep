#include <stdio.h>
int main() {
    int year;
    printf("Nhap vao mot nam: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d la nam nhuan\n", year);
    } else {
        printf("%d khong la nam nhuan\n", year);
    }
    return 0;
}

