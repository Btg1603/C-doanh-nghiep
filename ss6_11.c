#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen lon hon 0.\n");
        return 1;
    }

    printf("Danh sach %d so nguyen to dau tien:\n", n);

    
    for (count = 0; count < n; num++) {
        int isPrime = 1; 

       
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
            count++;
        }
    }

    printf("\n");
    return 0;
}

