#include <stdio.h>
#include <string.h>

int main() {
    char code[1000], massage[1000];

    fgets(code, 1000, stdin);
    fgets(massage, 1000, stdin);
    code[strcspn(code, "\r\n")] = '\0';
    massage[strcspn(massage, "\r\n")] = '\0';

    int len = strlen(code);
    if (len != (int)strlen(massage)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    char result[1000];
    int star = 0, hashtag = 0;
    for (int i = 0; i < len; i++) {
        if (code[i] == ' ' && massage[i] == ' ') {
            result[i] = ' ';
        } else if (code[i] == massage[i]) {
            result[i] = '*';
            star++;
        } else {
            result[i] = '#';
            hashtag++;
        }
    }
    
    result[len] = '\0';
    printf("%s\n", result);
    printf("* = %d\n", star);
    printf("# = %d\n", hashtag);

    if (star >= hashtag)
        printf("Pesan Asli\n");
    else
        printf("Pesan Palsu\n");

    return 0;
}