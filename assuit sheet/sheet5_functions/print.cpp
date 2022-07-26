#include <bits/stdc++.h>
using namespace std ;
void print  (  int number ) {
for  (int  i = 0 ; i < number  ; i ++ ) {
        if(i == number -1) {
            cout  << i + 1 ;
        }else {
        cout  << i + 1 <<" " ;
        }

}
}
int main ( ) {
    int number1 ;
    cin >> number1 ;
    print(number1) ;
}
