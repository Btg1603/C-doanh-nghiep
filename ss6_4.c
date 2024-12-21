#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    float delta, x1, x2;
    printf("Nhap he so a: ");
    scanf("%d", &a);
    printf("Nhap he so b: ");
    scanf("%d", &b);
    printf("Nhap he so c: ");
    scanf("%d", &c);
	if (a == 0) {
        	if (b == 0) {
            		if (c == 0) {
                		printf("Phương trình có vô số nghiệm.\n");
            } else {
                printf("Phương trình vô nghiệm.\n");
            }
        } else {
            double x = -c / b;
            printf("Phương trình có nghiệm duy nhất: x = %.2f\n", x);
        }
    } else {
		
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet:\n");
        printf("Nghiem 1: x1 = %.2f\n", x1);
        printf("Nghiem 2: x2 = %.2f\n", x2);
    } else if (delta == 0) {
   
        x1 = -b / (2.0 * a);
        printf("Phuong trinh co nghiem kep: x = %.2f\n", x1);
    } else {

        printf("Phuong trinh vo nghiem (khong co nghiem thuc)\n");
    }
	}	
    return 0;
}


