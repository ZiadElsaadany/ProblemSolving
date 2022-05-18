#include <bits/stdc++.h>
using namespace std ;
int main ( ) {
int n ;
short a ,b ;
long long sum = 0 ;
cin >> n >> a >>b ;
 int sumDigit  = 0 ;
for ( int  i = 1 ; i<=n ; i ++  ) {      // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
        int counter = i  ;
  sumDigit =0 ;
           while( counter>0){
        sumDigit = sumDigit + counter%10;
        counter = counter/10 ;
           }
      if(sumDigit>=min(a,b)&&sumDigit<=max(a,b)) {
        sum+=i;
      }
     }
     cout << sum ;
}
