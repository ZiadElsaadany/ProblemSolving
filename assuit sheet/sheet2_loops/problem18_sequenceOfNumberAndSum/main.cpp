#include <iostream>
using namespace std ;
int main ( ){

short  number1 , number2 ;
cin >> number1 >> number2;
int sum  ;
while (number1 !=0 &&number2!=0 && number1>0 && number2 >0){
   sum = 0 ;
    for( int i = min(number1,number2) ; i<=max(number1,number2) ; i++ ){
        sum = sum + i ;
        cout << i << " " ;
    }
    cout <<"sum =" << sum <<endl ;

    cin >> number1 >> number2;
}
}
