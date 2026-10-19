#include <stdio.h>

int digit_total(int n) {
    if (n < 10) {
        return n;
    } else {
        return (n % 10) + digit_total(n / 10);
    }
}

int main() {
    int Input_variabel;
    scanf("%d", &Input_variabel);
    
    int result = digit_total(Input_variabel);
    printf("Total digit dari %d adalah %d\n", Input_variabel, result);

    return 0;
}