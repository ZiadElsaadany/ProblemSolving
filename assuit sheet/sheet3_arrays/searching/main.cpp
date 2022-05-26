
#include <bits/stdc++.h>
using namespace std;
int main(){

//Searching

    int n ;
    cin >> n;
    int arr[n] ;
    for ( int i  = 0 ; i<n ; i++ ){
        cin >> arr[i] ;
    }
    int number ;
    bool flag = false;

    cin >> number  ;
     for ( int i  = 0 ; i<n ; i++ ){
       if(number == arr[i]){
        cout << i  ;
        flag = false;
        break ;
       }else{
       flag =true ;
       }
    }
    if(flag ){
        cout << -1 ;
    }
}
