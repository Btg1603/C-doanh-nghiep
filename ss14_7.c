#include<stdio.h>

int main(){
	//khai bao chuoi va cac bien dem
	char chuoi[] = "Hello my gmail is ten123@gmail.com";
	int countnumber=0, countchar=0, countspecialchar=0;
	
	//duyet qua tung chuoi
	for ( int i = 0 ; chuoi[i]!='\0'; i++){
		if((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')){
		countchar++;	
		}else if(chuoi[i] >= '0' && chuoi[i] <= '9'){
			countnumber++;
		}else{
			countspecialchar++;
		}
		
	}
	
	printf("So ki tu la so la = %d\n",countnumber);
	printf("So ki tu la chu cai la = %d\n",countchar);
	printf("So ki tu la ki tu dac biet la %d\n",countspecialchar);
	return 0;
	
	
} 
