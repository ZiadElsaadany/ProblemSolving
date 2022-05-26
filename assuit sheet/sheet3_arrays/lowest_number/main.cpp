#include <bits/stdc++.h>
using namespace std;
int main () {
// E. Lowest Number

    int n;
    cin >> n ;
    int arr[n];
    short counter ;
    int minimum = 1000000;
     for(int  i = 0 ; i<n ; i++  ) {
        cin >>arr[i];
        if(arr[i]<minimum){
            minimum = arr[i];
            counter  = i+1 ;
        }
     }
     cout <<  minimum<<" " << counter  <<endl;

}
