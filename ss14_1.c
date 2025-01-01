#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

  
    printf("Nhap mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);

    
    size_t length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--; 
    }

    
    printf("Chuoi vua nhap: %s\n", str);
    printf("Ðo dai cua chuoi: %zu\n", length);

    return 0;
}

