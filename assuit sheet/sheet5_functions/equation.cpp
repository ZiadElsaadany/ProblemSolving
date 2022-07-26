#include <bits/stdc++.h>
using namespace std ;

long long equation(short x , short n){
    long long s = 0 ;
    for (int i = 2 ; i<=n ; i+=2 ) {
            int counter  = i  ;
            int c= 1  ;
      while(counter--){
       c*=x;
      }
      s+=c ;
        }
       return s ;
}
int main(){
  short x, n ;
  cin >>x>>n ;
  cout  << equation(x,n) <<endl ;
}
// = (X^0 - 1) + (X^2) + (X^4) + (X^6) + ............... + (X^N)
