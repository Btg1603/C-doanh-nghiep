#include <stdio.h>
#include <string.h>

int main() {
   
    char str[] = "Hello, World!";

  
    char ch;
    int count = 0; 


    printf("Chuoi da khai bao: %s\n", str);
    printf("Nhap mot ki tu bat ki: ");
    scanf(" %c", &ch);

   
    for (size_t i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }


    printf("Ki tu '%c' xuat hien %d lan trong chuoi \"%s\".\n", ch, count, str);

    return 0;
}

