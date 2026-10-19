#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
    } else {
        long long a = 0, b = 1;
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                printf(" ");
            }
            printf("%lld", a);
            long long next = a + b;
            a = b;
            b = next;
        }
    }

    return 0;
}