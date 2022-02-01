#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int factorial(int n);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code from here
    int n{};
    cin >> n;
    cout << factorial(n);

    return 0;
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}