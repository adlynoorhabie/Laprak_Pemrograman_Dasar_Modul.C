#include <stdio.h> 
#include <math.h> 

int count(int Grade1, int Grade2){ 
    return Grade1 - Grade2;
}

int absolute(int Number){
    return (Number < 0) ? -Number : Number;
}

int main() { 
    int a,b,c,d; 
    int Result;
    
    scanf("%d",&a); 
    scanf("%d",&c); 
    scanf("%d",&b); 
    scanf("%d",&d); 
    
    Result = absolute(count(a,b)) + absolute(count(c,d));
    
    printf("%d",Result); 
    
    return 0;
}