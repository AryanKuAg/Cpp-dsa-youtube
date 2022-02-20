#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c;
    char str[100];
    char sen[100];
    scanf("%c%*c", &c);
    scanf("%s%*c", &str);
    scanf("%[^\n]%*c", &sen);
    printf("%c\n", c);
    printf("%s\n", str);
    printf("%s\n", sen);
    return 0;
}