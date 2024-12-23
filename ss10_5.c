#include <stdio.h>


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        
        if (arr[mid] == key)
            return mid;
        
     
        if (arr[mid] < key)
            left = mid + 1;
        
        else
            right = mid - 1;
    }
    
   
    return -1;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    bubbleSort(arr, n);

    
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    printf("Nhap phan tu can tim: ");
    scanf("%d", &key);

  
    int result = binarySearch(arr, n, key);

    if (result != -1) {
        printf("Phan tu %d ton tai tai vi tri %d.\n", key, result);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", key);
    }

    return 0;
}

