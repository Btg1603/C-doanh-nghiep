#include <stdio.h>
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap n lon hon 0.\n");
        return 1;  
    }
    long long a = 0, b = 1;
    printf("Day Fibonacci: ");
    for (int i = 1; i <= n; i++) 
        printf("%lld ", a);
        long long next = a + b; 
        a = b;  
        b = next;   
    printf("\n");
    return 0;
}

