#include<iostream>

using namespace std;

int main(){
    int i {};
    int row, col;
    cin >> row >> col;
    while ( i < row){


        for (size_t j {}; j < col ; j++){
            cout << "*";
        }
        cout << '\n';
        i++;
    }

    return 0;
}