#include <bits/stdc++.h>
using namespace std;
int main ( ) {

short number ;
cin >> number  ;
string number2;

for ( int i =0 ;i<number ; i++ ){
cin >> number2 ;

for ( int j =  number2.length() - 1 ; j>=0 ; j-- ){
    cout << number2[j] << " " ;
}
cout <<endl  ;

}

}
