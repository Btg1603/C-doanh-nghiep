#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int currentLength = 0;
    int n, delIndex;

    
    printf("Nhap so phan tu muon nhap (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n < 0 || n > MAX_SIZE) {
        printf("So phan tu không hop le!\n");
        return 1;
    }

  
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    currentLength = n;

   
    
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &delIndex);

   
    if (delIndex < 0 || delIndex >= currentLength ) {
        printf("Vi tri không hop le! Vi tri phai nam trong khoang tu 0 den %d.\n", MAX_SIZE - 1);
    } else {
    	
            for (for (int i = delIndex; i < currentLength; i++)) {
                arr[i] = arr[i+1];
            }
            currentLength--;
        }




     
        printf("Mang sau khi xoa: ");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    

    return 0;
}

