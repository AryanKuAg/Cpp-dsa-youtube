#include<stdio.h>

int main(){
    // find prime 3 - 100
    // no input
    // single line space output
    // array store prime 
    int prime[50];
    int num = 2;
    int counter = 0;
    
    for (size_t i =  2  ;i <= 100; ++i){
        // i contain increment values
        int isPrime = 1;
        while(num < i){
            if(i % num == 0){
                isPrime = 0;
                break;
            }
            num++; // num incrementing
        }
        num = 2; // num reset
        if (isPrime){
            prime[counter] = i;
            counter++;
        }
    }

    for (size_t i =  0 ; i < counter; ++i){
        printf("%d ", prime[i]);
    }

}