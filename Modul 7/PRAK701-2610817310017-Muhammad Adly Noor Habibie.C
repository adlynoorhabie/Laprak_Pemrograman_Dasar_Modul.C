#include <stdio.h>
#include <string.h>

int main() {
    char first_name[50], last_name[50], full_name[100];

    printf("Nama Depan: ");
    scanf("%s", first_name);

    printf("Nama Belakang: ");
    scanf("%s", last_name);

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    printf("Nama lengkap: %s\n", full_name);
    
    int name_length_without_space = strlen(full_name) - 1; 
    printf("Panjang nama (tanpa spasi): %d\n", name_length_without_space);

    return 0;
}