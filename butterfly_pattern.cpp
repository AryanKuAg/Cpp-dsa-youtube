#include<iostream>

using namespace std;
#define endl "\n"
int main(){
    // medium for me 
    // take n
    // col = n * 2, row = n * 2
    // var tleft for top left *'s {1}
    // var tright for top right *'s {1}
    // var bleft for bottom left *'s {n}
    // var bright for bottom right *'s {n}
    // upper part loop and lower part loop
    // tleft all things print 
    // space (2*n - tright)
    // tright print

    int n {};
    cin >> n;
    int col {n*2}, row {n* 2};
    int top_counter {1}, bottom_counter {n};

    // for top part
    for(int i {1} ; i <= n; ++i){
        // top left
        for(int tleft {1}; tleft <= i; tleft++){
            cout << "*";
        }

        // top space
        for(int space {(n * 2) - (i * 2)} ; space != 0 ; space--){
            cout << " ";
        }

        // top right
        for (int tright{1}; tright <= i; tright++){
            cout << "*";
        }
        cout << endl;
    }

    // for bottom part
    for(int i {n} ; i != 0; --i){
        // bottom left
        for (int bleft {i}; bleft != 0 ; bleft--){
            cout << "*";
        }

        // bottom space
        for ( int space {0} ; space != (n* 2) - (i * 2) ; space++){
            cout << " ";
        }

        // bottom right
        for (int bright {i} ; bright != 0; bright--){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}