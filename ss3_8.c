#include <stdio.h>
int main() {
    int n, reversedNum = 0, remainder;    
    printf("Nhap mot so nguyen co bon chu so: ");
    scanf("%d", &n);
    if (n < 1000 || n > 9999) {
        printf("vui long nhap mot so co bon chu so\n");
        return 1;
    }
    while (n != 0) {
        remainder = n % 10;          
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;                     
    }
    printf("so nghich dao la: %d\n", reversedNum);
    return 0;
}

