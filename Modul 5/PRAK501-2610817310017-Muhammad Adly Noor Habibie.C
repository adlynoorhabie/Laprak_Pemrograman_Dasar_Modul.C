#include <stdio.h> 

int MaxNumber(int a, int b, int c, int d) {
    int greatest_number = a;

    if (b > greatest_number) greatest_number = b;
    if (c > greatest_number) greatest_number = c;
    if (d > greatest_number) greatest_number = d;

    return greatest_number;
}

int main() { 
    int a, b, c, d; 

    scanf("%d %d %d %d", &a, &b, &c, &d); 

    int Result = MaxNumber(a, b, c, d); 

    printf("%d", Result); 
    
    return 0; 
} 