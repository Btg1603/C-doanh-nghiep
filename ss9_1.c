#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int currentLength = 0;
    int n, value, addIndex;

    
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

   
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri can them: ");
    scanf("%d", &addIndex);

   
    if (addIndex < 0 || addIndex >= MAX_SIZE) {
        printf("Vi tri không hop le! Vi tri phai nam trong khoang tu 0 den %d.\n", MAX_SIZE - 1);
    } else {
    	
    	
    	
        if (addIndex >= currentLength) {
           
            arr[addIndex] = value;
            currentLength++;
        } else {
        	
        	
        	
        	
            for (int i = currentLength; i > addIndex; i--) {
                arr[i] = arr[i-1];
            }
            arr[addIndex] = value;
            currentLength++;
        }




     
        printf("Mang sau khi them: ");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

