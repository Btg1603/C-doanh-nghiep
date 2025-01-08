#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *inputString ;  
    char *reverseString ; 
    int length;

    
    printf("Nhap vao mot chuoi: ");
    
    inputString = (char *)malloc(100 * sizeof(char)); 
    fgets(inputString, 100, stdin);   
    inputString[strcspn(inputString, "\n")] = '\0';

    
    length = strlen(inputString);

   
    reverseString = (char *)malloc((length + 1) * sizeof(char));  
    for (int i = 0; i < length; i++) {
        reverseString[i] = inputString[length - i - 1];
    }
    reverseString[length] = '\0';// them '\0' vao cuoi dung de ket thuc chuoi 

    
    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    
    free(inputString);
    free(reverseString);

    return 0;
}

