#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int currentLength = 0; 
    int choice;

    do {
       
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
               
                printf("Nhap so phan tu muon nhap (toi da %d): ", MAX_SIZE);
                scanf("%d", &currentLength);

                if (currentLength < 0 || currentLength > MAX_SIZE) {
                    printf("So phan tu khong hop le!\n");
                    currentLength = 0;
                } else {
                    for (int i = 0; i < currentLength; i++) {
                        printf("Nhap phan tu thu %d: ", i);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
            }

            case 2: {
                
                if (currentLength == 0) {
                    printf("Mang dang trong!\n");
                } else {
                    printf("Mang hien tai: ");
                    for (int i = 0; i < currentLength; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            }

            case 3: {
                
                int value, addIndex;

                printf("Nhap giá tri can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri can them: ");
                scanf("%d", &addIndex);

                if (addIndex < 0 || addIndex >= MAX_SIZE) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    if (addIndex >= currentLength) {
                        arr[addIndex] = value;
                        currentLength ++;
                    } else {
                        for (int i = currentLength; i > addIndex; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[addIndex] = value;
                        currentLength++;
                    }
                    printf("Them thanh cong!\n");
                }
                break;
            }

            case 4: {
            
                int editIndex, newValue;

                printf("Nhap vi tri can sua: ");
                scanf("%d", &editIndex);

                if (editIndex < 0 || editIndex >= currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &newValue);
                    arr[editIndex] = newValue;
                    printf("Sua thanh cong!\n");
                }
                break;
            }

            case 5: {
                int deleteIndex;

                printf("Nhap vi tri can xoa: ");
                scanf("%d", &deleteIndex);

                if (deleteIndex < 0 || deleteIndex >= currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = deleteIndex; i < currentLength - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    currentLength--;
                    printf("Xóa thành công!\n");
                }
                break;
            }

            case 6: 
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            

            default: {
                printf("Lua chon khong hop le! Vui long chon lai.\n");
                break;
            }
        }
    } while (choice != 6);

    return 0;
}

