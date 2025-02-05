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

// Hàm s?p x?p sinh viên theo tên
void sortStudentsByName(Student students[], int currentLength) {
    for (int i = 0; i < currentLength - 1; i++) {
        for (int j = i + 1; j < currentLength; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("\nDa sap xep danh sach sinh vien theo ten.\n");
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
    
    sortStudentsByName(students, currentLength);
    printStudents(students, currentLength);
    
    return 0;
}

