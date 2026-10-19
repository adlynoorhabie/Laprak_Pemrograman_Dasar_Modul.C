#include <stdio.h>

int main() {
    int choice;
    float a, b;

while (1) {
    printf("Pilih program\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Exit\n");

        printf("masukkan pilihan : ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Adly\n");
            break;
        }
        if (choice == 1) {
            printf("masukkan nilai pertama : ");
            scanf("%f", &a);
            printf("masukkan nilai kedua : ");
            scanf("%f", &b);
            printf("Hasil pilihan %.2f dengan %.2f adalah %.2f\n", a, b, a + b);
            continue;
        } 
        else if (choice == 2) {
            printf("masukkan nilai pertama : ");
            scanf("%f", &a);
            printf("masukkan nilai kedua : ");
            scanf("%f", &b);
            printf("Hasil pilihan %.2f dengan %.2f adalah %.2f\n", a, b, a - b);
            continue;
        } 
        else if (choice == 3) {
            printf("masukkan nilai pertama : ");
            scanf("%f", &a);
            printf("masukkan nilai kedua : ");
            scanf("%f", &b);
            printf("Hasil pilihan %.2f dengan %.2f adalah %.2f\n", a, b, a * b);
            continue;
        } 
        else if (choice == 4) {
            printf("masukkan nilai pertama : ");
            scanf("%f", &a);
            printf("masukkan nilai kedua : ");
            scanf("%f", &b);
            printf("Hasil pilihan %.2f dengan %.2f adalah %.2f\n", a, b, a / b);
            continue;
        } else {
            printf("Input anda salah, silahkan coba lagi \n");
        }
    }

    return 0;
}