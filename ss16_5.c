#include <stdio.h>


void updateArrayElement(int arr[], int size, int newValue, int position) {
    if (position < 0 || position >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    arr[position] = newValue;
}

int main() {
 
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);


    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

   
    int newValue = 10;
    int position = 2;
    updateArrayElement(myArray, size, newValue, position);

    
    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}

