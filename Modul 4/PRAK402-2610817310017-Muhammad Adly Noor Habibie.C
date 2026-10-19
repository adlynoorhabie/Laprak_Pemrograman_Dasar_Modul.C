#include <stdio.h>

int main() {
    int number, i, odd;

    scanf("%d", &number);

    for (i = 1; i <= number; i += 2) {
        printf("%d", i);
    }
    printf("\n");

    if (number % 2 == 0) {
        odd = number;
    } 
    else {
        odd = number - 1;
    }

    for (i = odd; i > 1; i -= 2) {
        printf("%d", i);
    }

    return 0;
}