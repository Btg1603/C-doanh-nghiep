#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[]="hello world";
	int len = strlen(chuoi);
	for (int i = 0; i<len;i++){
		if (i==0 || chuoi[i-1] == ' '){
			if (chuoi[i] >= 'a' && chuoi [i] <= 'z'){
				chuoi[i]=chuoi[i]-'a'+'A';
			}
		}
	} 
	
printf("chuoi sau khi viet hoa la %s\n",chuoi);
return 0;	
	
} 
