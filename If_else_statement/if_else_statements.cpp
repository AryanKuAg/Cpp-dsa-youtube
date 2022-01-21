#include<bits/stdc++.h>

using namespace std;
#define endl "\n"

int two_greater(int x, int y);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code from here
    short int a {}, b{}, c{};

    cin >> a >> b >> c;

    if (a>b){
        cout << two_greater(a,c);
    }else{

        cout << two_greater(b,c);
    }
    return 0;
}

int two_greater(int x, int y){
    if (x > y){
        return x;
    }else{
        return y;
    }
}