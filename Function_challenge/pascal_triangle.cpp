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

    for (int i{0}; i <= n; i++)
    {

        for (int j{0}; j <= r; j++)
        {
            if (i == 0)
            {
                cout << 1 << " ";
                break;
            }
            int temp = fac(i) / (fac(j) * fac(i - j));
            if (temp)
            {
                cout << temp << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}