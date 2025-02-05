#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5

// C?u trúc sinh viên
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

// Hàm in danh sách sinh viên
void printStudents(Student students[], int currentLength) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

// Hàm xóa sinh viên theo ID
void deleteStudent(int id, Student students[], int *currentLength) {
    int found = -1;
    for (int i = 0; i < *currentLength; i++) {
        if (students[i].id == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("\nKhong tim thay sinh vien voi ID %d.\n", id);
        return;
    }

    for (int i = found; i < *currentLength - 1; i++) {
        students[i] = students[i + 1];
    }
    (*currentLength)--;
    printf("\nDa xoa sinh vien co ID %d.\n", id);
}

int main() {
    Student students[MAX_STUDENTS] = {
        {101, "Nguyen Van A", 20, "0123456789"},
        {102, "Tran Thi B", 21, "0987654321"},
        {103, "Le Van C", 19, "0345678901"},
        {104, "Pham Thi D", 22, "0765432109"},
        {105, "Hoang Van E", 23, "0543210987"}
    };
    int currentLength = MAX_STUDENTS;

    printStudents(students, currentLength);

    int idToDelete;
    printf("\nNhap ID sinh vien can xoa: ");
    scanf("%d", &idToDelete);
    
    deleteStudent(idToDelete, students, &currentLength);
    printStudents(students, currentLength);
    
    return 0;
}

