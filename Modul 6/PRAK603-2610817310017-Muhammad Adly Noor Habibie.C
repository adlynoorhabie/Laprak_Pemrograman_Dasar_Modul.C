#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } 
    
    else {
        int rows[2][n1];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n1; j++) {
                scanf("%d", &rows[i][j]);
            }
        }

        for (int j = 0; j < n1; j++) {
            printf("%d ", rows[0][j] * rows[1][j]);
        }
        printf("\n");
    }

    return 0;
}