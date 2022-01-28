#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int main()
{
    // take n
    // make for top part then reverse the order
    // top = space + *
    // space = n - 1 to 0 // then odd number of stars
    int n{};
    cin >> n;
    int odd_counter = 0;
    for (int i{1}; i <= n; i++) // for each line
    {
        int elemts = i + odd_counter++; // *'s

        // for space
        for (int j{n - i}; j != 0; j--)
        {
            cout << "  ";
        }

        // *'s
        for (int j{1}; j <= elemts; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // down pattern

        return 0;
}