#include<stdio.h>
int main(){
	char ch;
	 
	FILE *sourceFile = fopen("bt01.txt","r");
	if(sourceFile == NULL){
		printf("Khong the mo file nguon bt01.txt!\n");
		return 1; 
	} 
	
	// mo file bt06 de ghi de hoac ghi moi  
	FILE *destFile = fopen("bt06.txt","w");
	if(destFile == NULL){
		printf("Khong the mo file dich dt06.txt!\n");
		// dong file nguon truoc khi ket thuc
		fclose(sourceFile); 
		return 1; 
	}
	
	
	// sao chep tung ki tu tu file nguon sang file dich
	while ((ch = fgetc(sourceFile)) != EOF){
	//ghi tung ki tu vao file dich
		fputc(ch,destFile);	 
	}
	
	
	fclose(sourceFile);
	fclose(destFile);
	printf("sao chep thanh cong");
	return 0;  
} 
