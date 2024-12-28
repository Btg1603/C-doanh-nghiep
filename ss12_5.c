#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num1, num2;

    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

 
    if (isPrime(num1)) {
        printf("%d la so nguyen to.\n", num1);
    } else {
        printf("%d khong phai la so nguyen to.\n", num1);
    }

 
    if (isPrime(num2)) {
        printf("%d la so nguyen to.\n", num2);
    } else {
        printf("%d khong phai la so nguyen to.\n", num2);
    }

    return 0;
}

