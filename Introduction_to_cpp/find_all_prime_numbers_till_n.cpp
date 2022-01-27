#include<iostream>
#include<vector>

using namespace std;

int all_prime(int n);

int main(){
    all_prime(50);
    return 0;
}

int all_prime(int n){
    // step 1 : a vector<int> that store all prime
    // a for loop that iterates over all number upto n
    // assume it is a prime
    // a nested while loop that iterate on each element upto itself, if it found then break loop and false to prime
    // if it is a prime then add it to vector
    // print all the vector with for in loop

    vector<int> prime ;

    for (size_t i {2} ; i <= n ; ++i){
        if (i > 2 && i % 2 == 0){
            continue;
        }
        bool isPrime = true;
        int prime_check = 2;
        while(prime_check < i){
            if (i % prime_check == 0){
                isPrime = false;
                break;
            }
            prime_check++;
        }

        if(isPrime){
            prime.push_back(i);
        }
    }
    // printing prime vector
    for(auto i:prime){
        cout << i << endl;
    }
    

    return 0;
}