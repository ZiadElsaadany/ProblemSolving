#include<bits/stdc++.h>
using namespace std;
int main ( ) {
short number ;
cin >> number ; //4
int numberOfStar= 1;
for( int i =1 ; i<=number ; i++ ){ // rows

   for(int j = number-1 ;j>=i ;j-- ){
    cout <<" " ;
   }
   for (int k = 0 ; k <numberOfStar ; k ++ ){
    cout << "*";
   }
   cout << endl ;
   numberOfStar = numberOfStar + 2 ;

}
}
