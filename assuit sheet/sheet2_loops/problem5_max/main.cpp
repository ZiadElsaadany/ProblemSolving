
#include <iostream>
using namespace std;
int main(){

//problem 5 Max

int n;
long long max= -100000000 ;
cin >> n;
long long number ;
for( int i = 0 ; i < n ; i++){
    cin >> number  ;
    if(number > max){
        max = number ;
    }
}
cout << max;
}
