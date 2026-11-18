#include <stdio.h>

int main() {
    int room_total;
    scanf("%d", &room_total);

    int zetsu[room_total];
    for (int i = 0; i < room_total; i++) {
        scanf("%d", &zetsu[i]);
    }

    int result[room_total];
    for (int i = 0; i < room_total; i++) {
        result[i] = zetsu[i] * (i + 1);
    }

    for (int i = 0; i < room_total; i++) {
        printf("%d", result[i]);
        if (i < room_total - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}