#include<bits/stdc++.h>

using namespace std;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code from here
    int n {};
    cin >> n ;
    int counter {1};

    for(int i{1} ; i <= n ; ++i){
        for (int j{1} ; j <= i ; j++){
            cout << counter++ << " ";
        }
        cout << endl;
    }
    
    return 0;
}