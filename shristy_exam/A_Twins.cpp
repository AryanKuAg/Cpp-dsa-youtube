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
    int bro_one{}, bro_two{}, bro_one_counter{}, bro_two_counter{};
    int coins[n]{};
    // taking values
    for (int i{}; i < n; i++)
    {
        cin >> coins[i];
    }
    // calculations
    for (int i{}; i < n; i++)
    {
        if (bro_one > bro_two)
        {
            bro_two += coins[i];
            bro_two_counter++;
        }
        else
        {

            bro_one += coins[i];
            bro_one_counter++;
        }
    }
    // test
    // cout << bro_two_counter;
    // result
    if (bro_one_counter == bro_two_counter)
    {
        cout << bro_one_counter + 1;
    }
    else if (bro_one_counter > bro_two_counter)
    {
        cout << bro_one_counter;
    }
    else
    {
        cout << bro_two_counter;
    }

    return 0;
}