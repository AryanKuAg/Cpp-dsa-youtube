#include <stdio.h>

void update(int *a, int *b)
{
    // Complete this function
    int sum = *a + *b, diff = 0;
    diff = *a > *b ? *a - *b : *b - *a;
    *a = sum;
    *b = diff;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}