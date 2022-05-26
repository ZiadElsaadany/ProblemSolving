#include <bits/stdc++.h>
using  namespace std;
int main (){

  //Reversing

     int n ; // 5
     cin >> n;
     int arr [n] ;
     for ( int i  = 0 ; i<n ; i++){
        cin >>  arr[i];
     } // arr =  1 2 3 4 5
     for( int i = 0 ; i<n ; i++ ){
        cout << arr[n-1-i]<<" " ;
     }
}
