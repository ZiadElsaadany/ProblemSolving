#include <bits/stdc++.h>
using namespace std;
int main ( ) {

short number ;
cin >>  number ;
int test1 ,test2 ;
int sum ;
for ( int i = 0 ;  i< number ; i++ ){
        sum = 0 ;
     cin >> test1 >> test2 ;

      for ( int j = min(test1,test2)+1 ; j<max(test1 ,test2 ); j ++ ) {
        if(j %2 !=0){
            sum += j ;
        }
      }
      cout << sum <<endl  ;

}

}
