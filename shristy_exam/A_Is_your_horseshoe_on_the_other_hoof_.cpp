#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code from here
    int s[4];
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    int similar{};

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (s[i] == s[j])
            {
                similar += 1;
                break;
            }
        }
    }

    cout << similar;
    return 0;
}