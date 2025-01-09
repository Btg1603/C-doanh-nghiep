#include <stdio.h>
#include <string.h>

// Dinh nghia cau truc SinhVien
struct SinhVien {
    int id;             // ID tu dong tang
    char name[50];      // Ten
    int age;            // Tuoi
    char phoneNumber[15]; // So dien thoai
};

int main() {
    // Khai bao mang sinh vien voi 50 phan tu
    struct SinhVien svArray[50];
    int n = 5; // So sinh vien can nhap (co the thay doi neu can)

    // Nhap thong tin cho 5 sinh vien
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);

        // Tu dong gan ID
        svArray[i].id = i + 1;

        // Nhap ten
        printf("Nhap ten: ");
        fflush(stdin); // Xoa bo nho dem
        fgets(svArray[i].name, sizeof(svArray[i].name), stdin);
        svArray[i].name[strcspn(svArray[i].name, "\n")] = '\0'; // Xoa ky tu xuong dong

        // Nhap tuoi
        printf("Nhap tuoi: ");
        scanf("%d", &svArray[i].age);

        // Nhap so dien thoai
        printf("Nhap so dien thoai: ");
        fflush(stdin); // Xoa bo nho dem
        fgets(svArray[i].phoneNumber, sizeof(svArray[i].phoneNumber), stdin);
        svArray[i].phoneNumber[strcspn(svArray[i].phoneNumber, "\n")] = '\0'; // Xoa ky tu xuong dong

        printf("\n");
    }

    // Tinh nang sua thong tin sinh vien
    int searchId;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &searchId);

    // Tim sinh vien theo ID
    int found = 0; // Bien kiem tra tim thay sinh vien hay khong
    for (int i = 0; i < n; i++) {
        if (svArray[i].id == searchId) {
            found = 1;

            // Sua thong tin sinh vien
            printf("Sua thong tin sinh vien co ID %d:\n", searchId);

            // Sua ten
            printf("Nhap ten moi: ");
            fflush(stdin); // Xoa bo nho dem
            fgets(svArray[i].name, sizeof(svArray[i].name), stdin);
            svArray[i].name[strcspn(svArray[i].name, "\n")] = '\0'; // Xoa ky tu xuong dong

            // Sua tuoi
            printf("Nhap tuoi moi: ");
            scanf("%d", &svArray[i].age);

            printf("Da sua thong tin thanh cong.\n\n");
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ID %d.\n\n", searchId);
    }

    // In thong tin tat ca sinh vien
    printf("Thong tin cac sinh vien sau khi sua:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", svArray[i].id);
        printf("Ten: %s\n", svArray[i].name);
        printf("Tuoi: %d\n", svArray[i].age);
        printf("So Dien Thoai: %s\n", svArray[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

