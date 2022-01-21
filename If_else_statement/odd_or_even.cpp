#include<bits/stdc++.h>

using namespace std;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code from here
    short int a{};
    cin >> a ;
    a % 2 == 0 ? cout << "Even" : cout << "Odd";
    cout << "\n"   ;
    return 0;
}