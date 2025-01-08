#include <stdio.h>
#include <stdlib.h>

void themPhanTu(int **arr, int *size, int value, int position) {
   
    if (position < 0 || position > *size) {
        printf("Vi tri không hop le!\n");
        return;
    } 
    *arr = (int *)realloc(*arr, (*size + 1) * sizeof(int));

    for (int i = *size; i > position; i--) {
        (*arr)[i] = (*arr)[i - 1];
    } 
    (*arr)[position] = value;
    // Tang kich thuoc mang
    (*size)++;
}




int main() {
    // Khai bao mang và gan
    int *arr ;
    int size = 5;

    // Cap phat bo nho cho mang va gan gia tri ban dau
    arr = (int *)malloc(size * sizeof(int));
    
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // In mang ban dau
    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Them phan tu moi
    int value = 10;
    int position = 2;
    themPhanTu(&arr, &size, value, position);

    // In mang sau khi them
    printf("Mang sau khi them phan tu: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    free(arr);

    return 0;
}

