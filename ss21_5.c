#include<stdio.h>
int main(){
	int line;
	char text[100];
	FILE *f;
	f = fopen("bt05.txt","w");
	if (f==NULL){
		printf("Khong the mo file");
		return 1; 
	} 
	printf("Nhap so dong: ");
	scanf("%d",&line);
	// xoa ki tu newline sau scanf 
	getchar();
	// nhap tung dong 
	for (int i=0 ; i<line ; i++){
		printf("Nhap noi dung dong thu %d :",i+1);
		fgets(text,sizeof(text),stdin);
		// ghi text vao file
		fputs(text,f);		 
	} 
	fclose(f); 
	f=fopen("bt05.txt","r");
	if (f==NULL){
		printf("Khong th mo file");
		return 1; 
	} 
	printf("Noi dung file sau khi ghi: \n");
	// doc tung dong cho toi khi doc het text 
	while(fgets(text,sizeof(text),f)){
		printf("%s",text); 
	}  
	fclose(f);
	return 0; 
} 
