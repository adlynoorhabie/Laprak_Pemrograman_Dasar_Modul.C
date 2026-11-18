#include <stdio.h>
#include <string.h>

int main() {
    char word[100];

    scanf("%s", word);

    int length = strlen(word);
    int palindrome = 1;

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("Kata '%s' adalah palindrom.\n", word);
    } else {
        printf("Kata '%s' bukan palindrom.\n", word);
    }

    return 0;
}