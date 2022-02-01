#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int main()
{
    int n{}, m{};
    cin >> n;
    m = n;
    int sum{};

    while (n > 0)
    {
        int last_digit = n % 10;
        n /= 10;
        sum += pow(last_digit, 3);
    }

    if (m == sum)
    {
        cout << "It is a Armstrong number" << endl;
    }
    else
    {
        cout << "This number is not an armstrong number" << endl;
    }

    return 0;
}