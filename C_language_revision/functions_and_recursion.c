#include<stdio.h>
int factorial(int n);

// I really fall in love with this ^_^
int main(){
    
    int f  = 9;
    printf("The factorial of %d is: %d", f,factorial(f));
    return 0;
}

int factorial(int n){
    if ( n < 2){
        return 1;
    }
    return n * factorial(n - 1);
}