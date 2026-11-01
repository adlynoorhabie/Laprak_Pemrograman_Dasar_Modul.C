#include <stdio.h> 
int reverse(int number){ 
    int reversed = 0;
    int sign = number < 0 ? -1 : 1;
    number *= sign;
    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return sign * reversed;
} 
    int main() { 
    int A, B; 

    scanf("%d %d",&A,&B); 
    
    A = reverse(A); 
    B = reverse(B);
    
    int C = A + B; 

    printf("%d",reverse(C)); 
} 