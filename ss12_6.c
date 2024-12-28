#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int num) {
    if (num <= 1) {
        return false;
    }
    
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    return sum == num;
}

int main() {
    int num1, num2;

   
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    if (isPerfect(num1)) {
        printf("%d la so hoan hao.\n", num1);
    } else {
        printf("%d khong phai la so hoan hao.\n", num1);
    }

    if (isPerfect(num2)) {
        printf("%d la so hoan hao.\n", num2);
    } else {
        printf("%d khong phai la so hoan hao.\n", num2);
    }

    return 0;
}

