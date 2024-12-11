#include<stdio.h>
int main(){
	int n,nam;
	printf("nhap vao thang can tim ");
	scanf("%d",&n);
	printf("nhap vao nam can tim ");
	scanf("%d",&nam);
	switch (n){
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	printf("thang %d co 31 ngay",n);
	break;
	case 4: case 6: case 9: case 11: 
	printf("thang %d co 30 ngay",n);
	break; 
	case 2:
	if (nam%400==0||nam%4==0&&nam%10!=0)
	printf("thang %d co 29 ngay ",n);
	else ("thang %d co 28 ngay ",n); 
	break; 
}
}
