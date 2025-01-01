#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[10];
	char del;
	printf ("Nhap chuoi ki tu ");
	fgets(chuoi,100,stdin);
	 chuoi[strcspn(chuoi, "\n")] = '\0'; 
	printf("Nhap mot ki tu de xoa ");
	scanf("%c", &del);
	 int len = strlen(chuoi);
	 int j=0;
	 for (int i =0; i<len;i++){
	 	if (chuoi[i]!=del){
	 		chuoi[j++]=chuoi[i]; 
		 } 
	 } 
	chuoi[j]='\0';
	printf("chuoi sau khi xoa la %s",chuoi);
	return 0; 
} 
