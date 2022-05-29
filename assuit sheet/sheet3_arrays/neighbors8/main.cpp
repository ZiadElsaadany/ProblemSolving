#include <bits/stdc++.h>

using namespace std;

int main()
{
  char arr[101][101] ;
  int n , m  ;
  bool flag =false;
  cin >> n >> m ;
  for (int i =0  ; i < n ; i ++ ){
    for (int j = 0 ; j < m ; j++ ){
        cin >> arr[i][j] ;
    }
  }
  int x ,y ;
cin >>x>>y ;
int rowIn = x-1 ; ///1
int columnIn= y-1 ;   ///1
if(arr[rowIn-1][columnIn-1]!='.' &&
    arr[rowIn-1][columnIn]!='.'
    &&arr[rowIn-1][columnIn+1]!='.'
    && arr[rowIn][columnIn-1]!='.'&&arr[rowIn][columnIn+1]!='.'
    && arr[rowIn+1][columnIn-1] !='.'
    &&arr[rowIn+1][columnIn] !='.'
    &&arr[rowIn+1][columnIn+1] !='.'
    ){
        cout << "yes" ;
    }else {
    cout << "no" ;
    }



    return 0;
}
