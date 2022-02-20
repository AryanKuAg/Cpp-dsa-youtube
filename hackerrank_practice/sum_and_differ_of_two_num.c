#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, j;
    float l, m;
    scanf("%d%d%f%f", &i, &j, &l, &m);
    //
    printf("%d %d\n", i + j, i - j);
    printf("%.1f %.1f\n", l + m, l - m);
    return 0;
}