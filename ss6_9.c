#include <stdio.h> 

int main() {
    int sum, temp, t; 
    for (int num = 100; num <= 999; num++) {
        sum = 0;  
        temp = num;  
        for (int i = 0; i < 3; i++) {
            t = temp % 10;        
            sum += t * t * t;    
            temp /= 10;          
        }
        if (sum == num) {
            printf("%d ", num);  
        }
    }
    return 0;
}

