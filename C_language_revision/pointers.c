#include<stdio.h>

// the format specifer of pointer is %u

int main(){
    long double just = 343.33;
    long double* temp = &just;

    printf("The address of variable temp is: %d",sizeof(temp));

    return 0;
}