#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int main()
{
    // loop increment by +2
    // starting number = row number
    //
    int n{};
    cin >> n;
    int odd_counter = 0;
    for (int i{1}; i <= n; i += 1)
    { // for each line
        int col = i + odd_counter++;

        // space
        for (int j{n - i}; j != 0; j--)
        {
            cout << "  ";
        }

        // part 1 decrease
        for (int j{col - i + 1}; j != 0; j--)
        {
            cout << j << " ";
        }

        // part 2 increase
        if (i > 1)
        {
            for (int j{2}; j <= col - i + 1; j++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}