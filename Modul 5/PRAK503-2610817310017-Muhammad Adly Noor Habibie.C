#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int minimum(int a, int b)
{
    return (a < b) ? a : b;
}

int main(void)
{
    int batas = 0;
    int maks = -100000;
    int min = 100000;
    int bilangan;
    int nilai;

    scanf("%d", &bilangan);
    while (batas < bilangan) {
        scanf("%d", &nilai);
        maks = max(maks, nilai);
        min = minimum(min, nilai);
        batas++;
    }

    printf("%d %d", maks, min);
    
    return 0;
}