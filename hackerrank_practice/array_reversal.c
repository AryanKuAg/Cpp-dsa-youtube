#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    int *rev = (int *)malloc(num * sizeof(int));

    for (int i = 0; i < num; i++)
    {
        *(rev + num - 1 - i) = *(arr + i);
    }

    for (i = 0; i < num; i++)
        printf("%d ", *(rev + i));
    return 0;
}