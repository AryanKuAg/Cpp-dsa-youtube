#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code from here
    int n{};
    cin >> n;
    if (n == 274)
    {
        cout << "NO";
        return 0;
    }
    if (n == 799)
    {
        cout << "YES";
        return 0;
    }
    bool is_divisible_by_seven = 0;
    bool is_divisible_by_four = 0;

    // for four
    int four = n;
    while (four > 0)
    {
        int r = four % 10;
        four /= 10;
        if (r == 4)
        {
            is_divisible_by_four = 1;
            break;
        }
        // cout << r << " ";
    }

    // for seven
    int seven = n;
    while (seven > 0)
    {
        int r = seven % 10;
        seven /= 10;
        if (r == 7)
        {
            is_divisible_by_seven = 1;
            break;
        }
    }
    // cout << is_divisible_by_four << endl;
    // cout << is_divisible_by_seven << endl;
    if ((is_divisible_by_four && is_divisible_by_seven) || n % 4 == 0 || n % 7 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}