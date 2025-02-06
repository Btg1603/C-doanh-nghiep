#include<stdio.h>
#include<stdlib.h> 
typedef struct {
  int id;
  char name[50];
  int age;	
}Student;

int main(){
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	// Cap phat bo nho dong cho students có kieu du lieu Student 
	Student *students = (Student*)malloc(n*sizeof(Student));
	if (students==NULL){
		printf("Loi cap phat bo nho\n");
		return 1; 
	} 
	// nhap thong tin tu ban phim
	for (int i=0 ; i<n ; i++){
	printf("Nhap thong tin sinh vien thu %d\n",i+1);
	printf("ID: \n");
	scanf("%d",&students[i].id);
	printf("Name: \n");
	scanf(" %[^\n]",&students[i].name);
	printf("Age: \n");
	scanf("%d",&students[i].age);	
	}
	
	
	// Mo file 
	FILE *file = fopen("students.txt","w");
	if (file==NULL){
		printf("Khong the mo file\n");
		free(students); 
		return 1; 
	} 
	// ghi struct vao file
	for (int i = 0 ; i < n ; i++){
		fprintf(file,"%d,%s,%d\n",students[i].id,students[i].name,students[i].age);
		 
	} 
	fclose(file);
	free(students);
	printf("Du lieu da duoc luu"); 
} 
