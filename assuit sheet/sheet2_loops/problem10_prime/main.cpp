
#include<iostream>

using namespace std;

int main(){

    int N,  n;
    bool isPrime  ;
    cin >> N;

    // For every number between 2 to N, check
    // whether it is prime number or not

    for(int i = 2; i <= N; i++){
        isPrime = false; // prime
        // Check whether i is prime or not
        for(int j = 2; j <= i/2; j++){
             // Check If any number between 2 to i/2 divides I
             // completely If yes the i cannot be prime number
             if(i % j == 0){
                 isPrime = true;   // not prime
                 break;
             }
        }

        if(isPrime==false && N!= 1)
            cout << i << " ";
    }

   return 0;
}

