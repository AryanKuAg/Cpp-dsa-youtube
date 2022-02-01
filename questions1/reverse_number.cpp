#include <bits/stdc++.h>
#include <vector>

using namespace std;
#define endl "\n"
int main()
{
    int n{};
    cin >> n;
    int reversed{};

    while (n > 0)
    {
        int last_digit = n % 10;
        n /= 10;
        reversed = (reversed * 10) + last_digit;
    }
    cout << reversed << endl;

    return 0;
}
