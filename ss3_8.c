#include <stdio.h>
int main() {
    int n, reversedNum = 0, remainder;    
    printf("Nhap mot so nguyen co bon chu so: ");
    scanf("%d", &n);   
        remainder = n % 10;          
        reversedNum = reversedNum * 10 + remainder;
        n /= 10; 
      remainder = n % 10;          
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;    
      remainder = n % 10;          
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;    
      remainder = n % 10;          
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;    
    
    printf("so nghich dao la: %d\n", reversedNum);
    return 0;
}

