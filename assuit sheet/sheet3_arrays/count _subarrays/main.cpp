#include <bits/stdc++.h>

using namespace std;

int main()
{
   int tc ;
   cin >> tc;
   while(tc-- ){
    int n ;
    cin >>  n ;
    int arr[100000] ;
    int cnt = 0 ;
    for(int i = 0 ; i < n ; i ++ ){
        cin >> arr[i] ;
    }
    for ( int i = 0 ; i < n ; i ++ ){
            cnt++ ;
        for (int j = i+1 ; j < n ; j++  ){
            cnt++ ;
        }
    }
    cout << cnt <<endl;
   }
    return 0;
}
