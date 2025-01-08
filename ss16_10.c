#include <stdio.h>
#include <stdlib.h>

void xoaPhanTu(int **arr, int *size, int positiondel) {
   
    if (positiondel < 0 || positiondel >= *size) {
        printf("Vi tri không hop le!\n");
        return;
    } 
    *arr = (int *)realloc(*arr, (*size - 1) * sizeof(int));

    for (int i = positiondel; i < *size-1; i++) {
        (*arr)[i] = (*arr)[i+1];
    } 

    // giam kich thuoc mang
    (*size)--;
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

  
    int positiondel = 2;
    xoaPhanTu(&arr, &size, positiondel);

    // In mang sau khi xoa 
    printf("Mang sau khi xoa phan tu: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    free(arr);

    return 0;
}

