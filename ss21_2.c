#include<stdio.h>
int main(){
	FILE *f;
	char ch; 
	f = fopen("bt01.txt","r");
	if (f == NULL){
		printf("Khong the mo file! \n");
		return 1; 
	} 
	ch=fgetc(f);
	if (ch!=EOF){
		printf("Ki tu dau tien trong file la %c",ch); 
	}else{
		printf("file trong"); 
	} 
	 return 0; 
} 
