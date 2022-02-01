#include <bits/stdc++.h>

using namespace std;

void between_prime(int, int);

int main()
{
    int a{}, b{};
    cin >> a >> b;

    between_prime(a, b);
    return 0;
}

void between_prime(int a, int b)
{

    vector<int> prime_only;

    for (int i{a}; i <= b; i++)
    {
        bool is_prime = 1;
        int starter = 2;
        int temp = i;
        while (starter <= sqrt(temp))
        {
            if (temp % starter == 0)
            {
                is_prime = 0;
                break;
            }
            starter++;
        }

        if (is_prime)
        {
            prime_only.push_back(i);
        }
    }

    for (auto i : prime_only)
    {
        cout << i << " ";
    }
}
