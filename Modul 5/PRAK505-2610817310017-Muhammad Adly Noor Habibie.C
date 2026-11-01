#include <stdio.h>   
void PersonalData(int birthyear, char name[], char origin[]){ 
    int currentYear = 2020; 

        printf("Perkenalkan Nama Saya : %s\n", name);
        printf("Umur Saya : %d\n", currentYear - birthyear);
        printf("Saya Adalah Angkatan : %d\n", currentYear);
        printf("Asal Saya dari : %s\n", origin);
}   
    int main() {
    int birthYear; 
    char name[20], origin[15]; 

    scanf(" %d",&birthYear); 
    scanf(" %[^\n]%*c",name); 
    scanf(" %[^\n]%*c",origin); 

    PersonalData(birthYear, name, origin);

return 0; 
} 