// PRINT SUM OF FIVE DIGIT INTEGER NUMBER
#include<stdio.h>

int sumOf(int num){
    int sum = 0;
    while(num > 0){
        int r = num % 10;
        sum = r + sum;
        num /= 10;
    }
    printf("%d", sum);
}

int main(){
    sumOf(1489);

}