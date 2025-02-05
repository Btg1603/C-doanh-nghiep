#include<stdio.h>
int main(){
	FILE *f;
	char str[100];
	f = fopen("bt01.txt","a");
	if (f == NULL){
		printf("Khong the mo file");
		return 1; 
	} 
	printf("Nhap chuoi muon them vao: ");
	fgets(str,sizeof(str),stdin);
	// ghi chuoi vao file 
	fputs(str, f);
	fclose;
	printf("Ghi thanh cong");
	return 0; 
} 
