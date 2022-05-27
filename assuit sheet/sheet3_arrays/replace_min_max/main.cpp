#include <bits/stdc++.h>
using namespace std;
int main ( ){

int arr[1000] , n ;
cin >> n ;
int minumum = 100000;
int maximum =-100000;
int temp = 0  ;
for (int  i= 0 ; i<n ; i ++ ){
    cin  >>arr[i];  //5->4 1 3 10 8
}
int counterOfMinumum=0 ;
int counterOfMax=0 ;
for (int  i= 0 ; i<n ; i ++ ){
   if(minumum >  arr[i]){
    minumum = arr[i] ;
    counterOfMinumum = i;
   }
   if(maximum <  arr[i]){
    maximum = arr[i] ;
    counterOfMax = i ;
   }
}

swap(arr[counterOfMinumum ] ,arr[counterOfMax]);
for (int  i= 0 ; i<n ; i ++ ){

    cout <<arr[i]<< " " ;
}
}
