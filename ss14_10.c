#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[40];
	int dem[256]={0};
	printf("Nhap chuoi ");
	fgets(chuoi,40,stdin);
	chuoi[strcspn(chuoi, "\n")] = '\0'; 
	for(int i=0; chuoi[i]!='\0';i++){
		dem[(int) chuoi[i] ]++;
	} 
	for (int i=0; i<256; i++){
		if (dem[i] > 0){
			printf("%c : %d\n",i,dem[i]); 
		} 
	} 
	return 0; 
} 
