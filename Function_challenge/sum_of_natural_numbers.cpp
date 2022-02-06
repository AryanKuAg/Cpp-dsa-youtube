#include <iostream>

using namespace std;
int sum(int &n);
int main()
{
    int n{};
    cin >> n;
    // cout << (n * (n + 1)) / 2;
    cout << sum(n);
}

int sum(int &n)
{
    return (n * (n + 1)) / 2;
}