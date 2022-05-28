#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr [100][100] , n ,m ,x ;

    cin >> n >> m ;
    for ( int i =0 ;i < n ; i++ ){
        for  (int j = 0 ; j <m ; j++ ){
            cin >> arr[i][j] ;
        }
    }

    cin  >> x ;

      for ( int i =0 ;i < n ; i++ ){
        for  (int j = 0 ; j <m ; j++ ){
            if( arr[i][j] == x) {
               cout << "will not take number\n";
            return 0 ;
            }
        }
    }
    cout << "will take number\n";


    return 0;
}
