#include <stdio.h>

int hanoi_step(int n) {
    if (n == 1) {
        return 1;
    } else {
        return 2 * hanoi_step(n - 1) + 1;
    }
}

int main() {
    int n;

    scanf("%d", &n);
    printf("Jumlah langkah minimum untuk %d cakram adalah %d\n", n, hanoi_step(n));
    
    return 0;
}