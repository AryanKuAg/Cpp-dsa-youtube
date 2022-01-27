#include<iostream>

using namespace std;
#define endl "\n"
int main(){
    int n {};
    cin >> n;

    for (int i {n}; i != 0;i--){
        int temp = i;
        while(temp){
            cout << "*" ;
            temp--;
        }
        cout << endl;
    }
    return 0;
}