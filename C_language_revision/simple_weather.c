#include <stdio.h>

int main()
{
    // use of 2d array
    // total rainfall/year, averaege yearly raifall, average rainfall / month
    float whether[5][12] = {
        {25.4, 23.5, 52.4, 23.6, 22.62, 56.4, 32.5, 42.6, 34.5, 23.4, 34.3, 42.5}, {25.4, 23.5, 52.4, 23.6, 22.62, 56.4, 32.5, 42.6, 34.5, 23.4, 34.3, 42.5}, {25.4, 23.5, 52.4, 23.6, 22.62, 56.4, 32.5, 42.6, 34.5, 23.4, 34.3, 42.5}, {25.4, 23.5, 52.4, 23.6, 223.62, 56.4, 32.5, 42.6, 34.5, 23.4, 34.3, 42.5}, {25.4, 23.5, 52.4, 23.6, 22.62, 56.4, 32.5, 42.6, 34.5, 23.4, 34.3, 42.5}};

    float perYear[5];
    printf("Total Rainfall Per Year:\n");
    for (int i = 0; i < 5; ++i)
    {
        float total = 0;
        for (int j = 0; j < 12; ++j)
        {
            total += whether[i][j];
        }
        perYear[i] = total / 12;
        printf("%.2f ", perYear[i]);
    }
    printf("\nAverage Yearly Rainfall:\n");
    float total_rainfall_yearly = 0;
    for (int i = 0; i < 5; ++i)
    {
        total_rainfall_yearly += perYear[i];
    }
    printf("%.2f\n", total_rainfall_yearly / 5);
    printf("Average Rainfall Per Month:\n");

    for (int i = 0; i < 5; i++)
    {
        float total_month = 0;
        for (int j = 0; j < 5; j++)
        {
            total_month += whether[i][j];
        }
        printf("%.2f ", total_month / 12);
    }

    return 0;
}