#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int main()
{
    //   *   *
    //  * * * *
    // *   *   *
    int first_line{}, second_line{}, third_line{}, n{};
    cin >> n;
    for (int i{1}; i <= n; i += 4)
    {
        first_line++;
    }

    for (int i{2}; i <= n; i += 2)
    {
        second_line++;
    }

    for (int i{3}; i <= n; i += 4)
    {
        third_line++;
    }

    // good work above
    // first line
    cout << "  ";
    for (int i{0}; i < third_line; i++)
    {
        cout << "*   ";
    }
    cout << endl;
    // second line
    cout << " ";
    for (int i{0}; i < second_line; i++)
    {
        cout << "* ";
    }
    cout << endl;

    // third line
    for (int i{0}; i < first_line; i++)
    {
        cout << "*   ";
    }
    cout << endl;

    return 0;
}