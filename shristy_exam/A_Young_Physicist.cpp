#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int main()
{
    int n{};
    cin >> n;

    int forces[n][3] = {}; // [[0.0.0], [0.0.0], [0.0.0]]

    for (int i = 0; i < n; i++)
    {

        cin >> forces[i][0] >> forces[i][1] >> forces[i][2];
    }

    int x{}, y{}, z{};

    for (int i = 0; i < n; i++)
    {
        x += forces[i][0];
        y += forces[i][1];
        z += forces[i][2];
    }

    if (x == 0 && y == 0 && z == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}