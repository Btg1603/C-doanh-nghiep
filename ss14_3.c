#include <stdio.h>
#include <string.h>

int main() {
    
    char str[] = "Hello, World!";

 
    size_t length = strlen(str);

 
    printf("Chuoi goc: %s\n", str);
    printf("Chuoi dao nguoc: ");
    for (size_t i = length; i > 0; i--) {
        printf("%c", str[i - 1]); 
    }
    printf("\n");

    return 0;
}

