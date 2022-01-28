#include<bits/stdc++.h>

using namespace std;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code from here
    int n {};
    cin >> n;

    for (int i = 1;  i <= n; i++){
        // for space
        for(int j = n -i ; j!= 0 ; j--){
            cout << "  ";
        }
        // for *
        for (int j = 1 ; j <= n ; j++){
            cout << "* ";  
        }
        cout << endl;
    }

    return 0;
}