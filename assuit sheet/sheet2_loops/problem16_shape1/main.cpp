#include <iostream>
using namespace std ;
int main  ( ) {

short number ;
cin >> number ;
for  ( int  i = 0 ; i < number ; i ++ ){

    for( int j = number ; j >i ; j-- ){
        cout << "*";
    }
    cout << endl ;
}

}
