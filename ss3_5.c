#include <stdio.h>
int main() {   
    printf("------------------------------------------------------------\n");
    printf("| %-3s | %-15s | %-4s | %-11s | %-20s |\n", "STT", "Ho va ten", "Tuoi", "So dien thoai", "email");
    printf("------------------------------------------------------------\n");
    char students[10][5][50] = {
        {"1", "Nguyen Van A", "20", "0904488481", "anv@rikkeiacademy.com"},
        {"2", "Nguyen Van B", "21", "0904488482", "bnv@rikkeiacademy.com"},
        {"3", "Nguyen Van C", "18", "0904488483", "cnv@rikkeiacademy.com"},
        {"4", "Nguyen Van D", "19", "0904488484", "dnv@rikkeiacademy.com"},
        {"5", "Nguyen Van E", "22", "0904488485", "env@rikkeiacademy.com"},
        {"6", "Nguyen Van F", "21", "0904488486", "fnv@rikkeiacademy.com"},
        {"7", "Nguyen Van G", "23", "0904488487", "gnv@rikkeiacademy.com"},
        {"8", "Nguyen Van H", "19", "0904488488", "hnv@rikkeiacademy.com"},
        {"9", "Nguyen Van I", "18", "0904488489", "inv@rikkeiacademy.com"},
        {"10", "Nguyen Van K", "21", "0904488480", "knv@rikkeiacademy.com"}
    };
    for (int i = 0; i < 10; i++) {
        printf("| %-3s | %-15s | %-4s | %-11s | %-20s |\n",
               students[i][0], students[i][1], students[i][2], students[i][3], students[i][4]);
    }
    printf("------------------------------------------------------------\n");
    return 0;
}

	 
	

