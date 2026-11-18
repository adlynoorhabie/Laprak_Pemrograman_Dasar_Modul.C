#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int A[n][n], B[n][n];
    scanf("%*s %*s");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
            
    scanf("%*s %*s");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    printf("Matriks AxB\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int total = 0;
            for (int k = 0; k < n; k++)
                total += A[i][k] * B[k][j];
            if (j > 0) printf(" ");
            printf("%d", total);
        }
        printf("\n");
    }
    return 0;
}