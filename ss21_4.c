#include<stdio.h>
int main(){
	FILE *f;
	char read[100]; 
	f = fopen("bt01.txt","r");
	if (f == NULL){
		printf("Khong the mo file");
		return 1; 
	} 
    if (fgets(read,sizeof(read),f)!=NULL){
    	printf("Dong dau tien : %s",read); 
	} else{
		printf("Khong the doc"); 
	} 
	fclose(f); 
	return 0; 
} 
