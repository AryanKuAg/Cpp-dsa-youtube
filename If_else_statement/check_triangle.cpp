#include<bits/stdc++.h>

using namespace std;
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code from here
    short int s1 {}, s2 {}, s3{};
    cin >> s1 >> s2 >> s3;

    if (s1 == s2 && s2 == s3 ){
        cout << "Equilateral Triangle";
    }   else if ((s1 == s2 ) || (s2 == s3) || (s3 == s1)  ){
        cout << "Ioseles Triangle";
    }else{
        cout << "Scalene Triangle";
    }
    cout << "\n";
    return 0;
}