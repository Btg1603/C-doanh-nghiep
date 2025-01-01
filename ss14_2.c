#include <stdio.h>
#include <string.h>

int main() {
    
    char str[] = "Hello, World!";

   
    size_t length = strlen(str);


    printf("Cac ki tu trong chuoi la: ");
    for (size_t i = 0; i < length; i++) {
        printf("%c ", str[i]);
    }

    printf("\n"); 
    return 0;
}

