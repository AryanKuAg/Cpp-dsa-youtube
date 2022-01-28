#include<bits/stdc++.h>

using namespace std;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code from here
    int n ;
    cin >> n;
    bool temp = true;
    for (int i = 0; i< n ; i++){
    bool count = temp;

        for (int j = 0; j <=i; j++ ){
            cout << count << " ";
            count  = !count;
        }
        cout << endl;
        temp = !temp;
    }
    
    return 0;
}