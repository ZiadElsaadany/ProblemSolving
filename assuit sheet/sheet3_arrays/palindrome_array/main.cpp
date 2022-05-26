#include <bits/stdc++.h>
using namespace std;
int main(){
 // G. Palindrome Array

     int n ;
     cin >> n ;
     string arr [n] ;
     bool flag =false ;
     for ( int i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
        }
     for(int j = 0 ; j< n ; j++){
        if(arr[j] == arr[n-1-j]){
            flag =true;
     }
        else{
       flag = false;
       break ;
 }


     }
        if(flag) {
            cout << "YES";
        }else {
        cout << "NO";
        }



}
