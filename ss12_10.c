#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int array[MAX_SIZE];
int size = 0;

void inputArray() {
    printf("Nhap so phan tu: ");
    scanf("%d", &size);
    if (size > MAX_SIZE) {
        printf("So phan tu vuot qua gioi han!\n");
        size = 0;
        return;
    }
    printf("Nhap gia tri cac phan tu:\n");
    for (int i = 0; i < size; i++) {
        printf("Phan tu %d: ", i);
        scanf("%d", &array[i]);
    }
}

void printArray() {
    if (size == 0) {
        printf("Mang rong.\n");
        return;
    }
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertElement() {
    if (size >= MAX_SIZE) {
        printf("Mang da day!\n");
        return;
    }
    int pos, value;
    printf("Nhap vi tri can them: ");
    scanf("%d", &pos);
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    if (pos < 0 || pos > size) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (int i = size; i > pos; i--) {
        array[i] = array[i - 1];
    }
    array[pos] = value;
    size++;
}

void updateElement() {
    int pos, value;
    printf("Nhap vi tri can sua: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    array[pos] = value;
}

void deleteElement() {
    int pos;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    size--;
}

void sortArray(int order) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((order == 0 && array[i] < array[j]) || (order == 1 && array[i] > array[j])) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void linearSearch() {
    int value;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            printf("Tim thay %d tai vi tri %d.\n", value, i);
            return;
        }
    }
    printf("Khong tim thay %d trong mang.\n", value);
}

void binarySearch() {
    int value;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (array[mid] == value) {
            printf("Tim thay %d tai vi tri %d.\n", value, mid);
            return;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("Khong tim thay %d trong mang.\n", value);
}

int main() {
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap mang\n");
        printf("2. In mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Sap xep mang\n");
        printf("   a. Giam dan\n");
        printf("   b. Tang dan\n");
        printf("7. Tim kiem\n");
        printf("   a. Tuyen tinh\n");
        printf("   b. Nhi phan\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray();
                break;
            case 2:
                printArray();
                break;
            case 3:
                insertElement();
                break;
            case 4:
                updateElement();
                break;
            case 5:
                deleteElement();
                break;
            case 6:
                printf("Chon cach sap xep (0: Giam dan, 1: Tang dan): ");
                int order;
                scanf("%d", &order);
                sortArray(order);
                break;
            case 7:
                printf("Chon cach tim kiem (0: Tuyen tinh, 1: Nhi phan): ");
                int searchType;
                scanf("%d", &searchType);
                if (searchType == 0)
                    linearSearch();
                else if (searchType == 1)
                    binarySearch();
                else
                    printf("Lua chon khong hop le.\n");
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 8);

    return 0;
}

