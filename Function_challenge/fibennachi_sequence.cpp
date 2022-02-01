#include <bits/stdc++.h>

using namespace std;
int fib(int);

#define endl "\n"
int main()
{
    int n{};
    cin >> n;
    cout << fib(n) << endl;

    return 0;
}

int fib(int n)
{
    if (n <= 1 || n == 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}