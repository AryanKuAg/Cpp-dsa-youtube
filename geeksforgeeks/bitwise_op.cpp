#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int main()
{
    unsigned int one = 30; // 0001 1110
    unsigned int two = 20; // 0001 0100
    int result = ~two;

    cout << result; // 1000 0010

    return 0;
}