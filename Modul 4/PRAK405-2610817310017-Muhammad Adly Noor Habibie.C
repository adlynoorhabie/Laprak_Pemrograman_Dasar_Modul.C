#include <stdio.h>
#include <string.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int total = 0;
    int sum_of_totals = 0;
    char expression[1000] = "";

    for (int i = 1; i <= n; i++) {
        int multiple = i * x;
        total += multiple;

        if (i == 1) {
            snprintf(expression, sizeof(expression), "(%d * %d)", i, x);
        } 
        else {
            char temp[1000];
            snprintf(temp, sizeof(temp), "(%d * %d) + %s", i, x, expression);
            strcpy(expression, temp);
        }

        printf("%s = %d\n", expression, total);
        sum_of_totals += total;
    }

    printf("%d\n", sum_of_totals);
    
    return 0;
}