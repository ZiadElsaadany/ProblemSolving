
#include <bits/stdc++.h>
using namespace std;

int main() {
 //D. Positions in array

    short  n;
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i<n ; i++) {
        cin >> arr [i] ;
        if(arr[i]  <=10 ){
            cout << "A["<<i<<"] = "<<arr[i] <<endl;
        }
    }

}
