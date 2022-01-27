#include<iostream>

using namespace std;
#define endl "\n"
int main(){
    // take n
    // for loop for n rows start with 1
    // for loop for column start ith 1
    // i know start with 1 and last with n
    // space (n - row) else *
    int n {};
    cin >> n;
    for (int row {1}; row <= n ;row++){
        for(int col {1} ; col <= n ;col++){
            if (n - row >= col){
                cout << " ";
            }else{
                cout << "*";
            }

        }
        cout << endl;
    }
    
    return 0;
}