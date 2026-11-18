#include <stdio.h>

int main() {
    int row, column;
    scanf("%d %d", &row, &column);

    int number[row * column];
    for (int i = 0; i < row * column; i++) {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d", number[i * column + j]);
            if (j < column - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}