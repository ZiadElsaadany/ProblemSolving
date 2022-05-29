#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,m ;
    cin >> n >>m;
    long long arr[100][100];
    for( int i = 0 ; i<n ; i++ ){
        for(int j= 0 ; j<m ; j++ ){
                            cin >> arr[i][j];
        }
    }
        for( int i = 0 ; i<n ; i++ ){
        for(int j= m-1 ; j>=0 ; j-- ){
                       cout <<  arr[i][j] << " ";
        }
        cout <<endl ;
    }


    return 0;
}
/**
input
3 3
2 3 5 [0][0]         [0][2]
7 9 20 [1][0]          [1] [2]
35 1 12 [2][0]        [2][2]

**/
/**
output
5 3 2
20 9 7
12 1 35
**/
