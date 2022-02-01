#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

int fac(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fac(n - 1);
}
int main()
{
    int n{}, r{};
    cin >> n >> r;

    int result = fac(n) / (fac(r) * fac(n - r));
    cout << result;
    return 0;
}