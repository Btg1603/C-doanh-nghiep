#include<stdio.h>
int main(){
	FILE *f;
	char str[1000]; 
	f = fopen("bt01.txt","w"); 
    if(f == NULL){
    	printf("Khong the mo file de ghi!\n");
		return 1; 
	} 
	printf("Nhap mot chuoi bat ki: ");
	// Nhap tu ban phim 
	fgets(str,sizeof(str),stdin);
	// ghi vao file  
	fprintf(f,"%s",str);
	// dong file 
	fclose;
	printf("Da ghi vao file");
	return 0; 
} 
