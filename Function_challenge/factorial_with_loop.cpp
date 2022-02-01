#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int fac_loop(int n);

int main()
{
    int n{};
    cin >> n;
    fac_loop(n);
    return 0;
}

int fac_loop(int n)
{
    int result{1};
    for (int i{1}; i <= n; i++)
    {
        result *= i;
    }

    cout << result << endl;
    return 0;
}