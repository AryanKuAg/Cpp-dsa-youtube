#include<iostream>

using namespace std;
#define endl "\n"
int main(){
    int row {}, col{};
    cin >> row >> col;
    // cout << sizeof(col) ;

    for(size_t i {} ; i < row ; ++i){

        // if (i == 0)
        for(size_t j {} ;j  < col ; ++j){
            if (j == 0 || j == col - 1){
                cout << "*";
            }else{
                if (i == 0 || i == row -1 ){
                    cout << "*";
                }else{
                    cout << " ";
                }
                
            }

        }
        cout << endl;

    }
    
    return 0;
}