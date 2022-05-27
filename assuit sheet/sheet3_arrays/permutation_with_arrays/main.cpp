#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n  ;
    cin >> n ;
    long long arr[1000] ;
    long long arr2 [1000] ;
    for(int  i = 0 ; i < n ; i++ ){
        cin >> arr[i] ;
    }

    for(int   i = 0 ; i< n ; i++ ){
        cin >> arr2[i] ;
    }

    sort (arr ,arr+n) ; // 1 2 3 4

    sort (arr2 ,arr2+n); // 1 2 3 4
    for (int   i = 0 ; i< n ; i++ ){
        if(arr[i]!=arr2[i]) {
            cout << "no" ;
            return 0 ;
        }
    }
    cout << "yes" <<endl ;


    return 0;
}
