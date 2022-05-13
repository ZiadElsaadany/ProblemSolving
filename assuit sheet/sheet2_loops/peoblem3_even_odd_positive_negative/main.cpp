#include <iostream>
using namespace std ;
int main(){

//problem 3 Even, Odd, Positive and Negative

int n ;
cin >> n;
int c1Even=0  , c2Odd=0 ,c3Pos = 0, c4Neg= 0 ;
int number;
for( int i = 0 ; i <n ; i++){
   cin >> number ;
   if(number%2 == 0 ){
    c1Even ++ ;
   }else {
   c2Odd++ ;
   }
   if(number != 0 ){
    if(number > 0 ){
        c3Pos ++ ;
    }
    else {
        c4Neg++;
    }
   }
}
cout << "Even: " <<c1Even <<endl ;
cout << "Odd: " <<c2Odd <<endl ;
cout << "Positive: " <<c3Pos <<endl ;
cout << "Negative: " <<c4Neg <<endl ;
}

