#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];

    printf("Masukkan kalimat: ");
    fgets(sentence, 100, stdin);

    int vokal_count = 0;
    int consonant_count = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = sentence[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + ('a' - 'A');
            }
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vokal_count++;
            } else {
                consonant_count++;
            }
        }
    }

    printf("Jumlah vokal: %d\n", vokal_count);
    printf("Jumlah konsonan: %d\n", consonant_count);

    return 0;
}