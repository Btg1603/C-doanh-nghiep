#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Khai bao va gan gia tri cho chuoi
    char str[] = "hello world";
    int word_count = 0; // Bien de dem so tu
    int in_word = 0;    // Bien de kiem tra trang thai trong tu

    // Duyet qua tung ky tu trong chuoi
    for (size_t i = 0; i < strlen(str); i++) {
        if (!isspace(str[i])) { // Neu ky tu khong phai khoang trang
            if (!in_word) {     // Neu truoc do khong trong tu
                word_count++;   // Tang so tu len
                in_word = 1;    // Danh dau la dang trong tu
            }
        } else {
            in_word = 0;        // Dat trang thai ngoai tu
        }
    }

    // In ket qua
    printf("Chuoi: \"%s\"\n", str);
    printf("So tu trong chuoi: %d\n", word_count);

    return 0;
}

