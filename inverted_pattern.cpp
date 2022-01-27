#include<iostream>

using namespace std;
#define endl "\n"
int main(){
    // take n
    // loop to n then nested loop upto i 
    // print the nested loop variable

    int n {};
    cin >> n;

    for (size_t i{n}; i != 0;i--){
        for (int j{1}; j <= i ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}