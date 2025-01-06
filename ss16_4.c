#include<stdio.h>


void printarr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d  ", arr[i]);
	}
    printf("\n");
}

int main() {
    int arr[5] = {0, 1, 2, 3, 4}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    printarr(arr, size); 
    return 0;
}


