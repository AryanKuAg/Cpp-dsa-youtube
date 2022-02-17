#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code from here
    string s{};
    cin >> s;
    string word{"hello"};
    int listener{0};

    for (int i{}; i < s.length(); i++)
    {
        // cout << s[i];
        if (word[listener] == s[i])
            listener++;
    }
    listener == word.length() ? cout << "YES" : cout << "NO";

    return 0;
}