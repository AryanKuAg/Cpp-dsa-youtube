// // char is to store ascii value
// // int/long store integer value 2**32
// #include <stdio.h>
// #include <math.h>

// int myfun(int a, int b);

// int main()
// {
//     // for (int i = 0; i < 10; i++)
//     //     printf("%f\n", (float)i);

//     // int a = (float)343.34234923472942942742429482742947283427428740978234924772;
//     // printf("%d", a);
//     // double a = 343.53423;
//     // printf("%p\n", (int *)&a);
//     // int *b = (int *)&a;
//     // printf("%p\n", b);
//     // int c = *b;
//     // printf("%d", c);
//     // struct Army
//     // {
//     //     int a;
//     //     char b;
//     // } s;

//     // // struct Army myArmy = Army();
//     // s.b = '+';

//     //////                            //////
//     // int a;

//     // int array[] = &a;
//     // printf("%d", sizeof(array));

//     // char name[] = "Aryan\0";
//     // printf("%d", sizeof(name));

//     // int a *a;
//     // int b = 33;
//     // int *a[10] = {&b};
//     // return 0;

//     // struct A
//     // {
//     //     double a;
//     //     char c;
//     // } s[10];

//     // (s + 9)->a = 34.34342;

//     // printf("%lf", (s + 9)->a);

//     // printf("%d", myfun(34, 35));
//     double j = 43.53522352342;
//     printf("%lf", j);
// }

// // int myfun(int a, int b)
// // {
// //     return 100;
// // }
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
    // char string[50] = "";
    // scanf("%[^\n]%*c", string);
    // printf("%s", string);

    char s1[30];
    char s2[30];
    char s3[30];

    scanf("%[^\n]%*c", s1);
    scanf("%[^\n]%*c", s2);
    scanf("%[^\n]%*c", s3);
    printf("\n%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
}