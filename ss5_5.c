#include<stdio.h>
int main(){
	int u,s,i;
	for (u=1;u<=9;u++){
		 
for (i=1;i<=10;i++){
	s=u*i;
	printf("%d x %d = %d\n",u,i,s); 
}
printf("--------------\n"); 
}
return 0; 
} 
