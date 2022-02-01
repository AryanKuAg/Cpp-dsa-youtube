#include <bits/stdc++.h>

using namespace std;
int fib(int);
#define endl "\n"
int main()
{
    int n;
    cin >> n;
    // cout << fib(n) << endl;
    fib(n);

    return 0;
}

int fib(int n)
{
    int first{1}, second{1};
    bool twitch = 0;
    for (int i{3}; i <= n; i++)
    {
        if (twitch == 0)
        {
            first = first + second;
        }
        else
        {
            second = second + first;
        }
        twitch = !twitch;
    }
    int big = first > second ? first : second;
    cout << big;
    return 0;
}