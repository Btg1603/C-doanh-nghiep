#include <stdio.h>
int main() {
    int day, month;

    printf("Nhap ngay sinh (1-31): ");
    scanf("%d", &day);
    printf("Nhap thang sinh (1-12): ");
    scanf("%d", &month);
     if ((day >= 21 && month == 3) || (day <= 19 && month == 4)) {
        printf("Bach Duong (Aries)\n");
    } else if ((day >= 20 && month == 4) || (day <= 20 && month == 5)) {
        printf("Kim Nguu (Taurus)\n");
    } else if ((day >= 21 && month == 5) || (day <= 20 && month == 6)) {
        printf("Song Tu (Gemini)\n");
    } else if ((day >= 21 && month == 6) || (day <= 22 && month == 7)) {
        printf("Cu Giai (Cancer)\n");
    } else if ((day >= 23 && month == 7) || (day <= 22 && month == 8)) {
        printf("Su Tu (Leo)\n");
    } else if ((day >= 23 && month == 8) || (day <= 22 && month == 9)) {
        printf("Xu Nu (Virgo)\n");
    } else if ((day >= 23 && month == 9) || (day <= 22 && month == 10)) {
        printf("Thien Binh (Libra)\n");
    } else if ((day >= 23 && month == 10) || (day <= 21 && month == 11)) {
        printf("Bo Cap (Scorpio)\n");
    } else if ((day >= 22 && month == 11) || (day <= 21 && month == 12)) {
        printf("Nhan Ma (Sagittarius)\n");
    } else if ((day >= 22 && month == 12) || (day <= 19 && month == 1)) {
        printf("Ma Ket (Capricorn)\n");
    } else if ((day >= 20 && month == 1) || (day <= 18 && month == 2)) {
        printf("Bao Binh (Aquarius)\n");
    } else if ((day >= 19 && month == 2) || (day <= 20 && month == 3)) {
        printf("Song Ngu (Pisces)\n");
    } else {
        printf("Ngay hoac thang khong hop le!\n");
    }

    return 0;
}

