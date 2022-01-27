#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a = 3, b = 6;
    printf("\nBefore:::: a is %d and b is %d\n", a, b);
    swap(&a, &b);
    printf("After:::: a is %d and b is %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}