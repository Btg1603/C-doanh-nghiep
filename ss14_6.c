#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Khai bao va gan gia tri cho chuoi
    char str[] = "Hello, World! 123";

    // Bien de dem so ky tu la chu cai
    int letter_count = 0;

    // Duyet qua tung ky tu trong chuoi
    for (size_t i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) { // Kiem tra neu ky tu la chu cai
            letter_count++;
        }
    }

    // In ket qua
    printf("Chuoi: \"%s\"\n", str);
    printf("So ky tu la chu cai trong chuoi: %d\n", letter_count);

    return 0;
}

