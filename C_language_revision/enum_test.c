#include<stdio.h>

int main(){
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company c1 = XEROX;
    enum Company c2 = GOOGLE;
    enum Company c3 = EBAY;

    printf("%d\n%d\n%d\n",c1,c2,c3);


    return 0;
}