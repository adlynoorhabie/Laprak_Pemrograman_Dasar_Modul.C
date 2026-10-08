#include <stdio.h>

int main(void) {
    char name[100], nim[30], parallel_class[5], birth_date[100], address[100], hobby[30], phone_number[15];

    printf("Nama                    \t: ");
    scanf(" %99[^\n]", name);
    printf("NIM                     \t: ");
    scanf(" %29[^\n]", nim);
    printf("Kelas Paralel           \t: ");
    scanf(" %4[^\n]", parallel_class);
    printf("Tempat/Tanggal Lahir    \t: ");
    scanf(" %99[^\n]", birth_date);
    printf("Alamat                  \t: ");
    scanf(" %99[^\n]", address);
    printf("Hobby                   \t: ");
    scanf(" %29[^\n]", hobby);
    printf("No. HP                  \t: ");
    scanf(" %14[^\n]", phone_number);

    printf("Nama                    \t: %s\n", name);
    printf("NIM                     \t: %s\n", nim);
    printf("Kelas Paralel           \t: %s\n", parallel_class);
    printf("Tempat/Tanggal Lahir    \t: %s\n", birth_date);
    printf("Alamat                  \t: %s\n", address);
    printf("Hobby                   \t: %s\n", hobby);
    printf("No. HP                  \t: %s\n", phone_number);

    return 0;
}