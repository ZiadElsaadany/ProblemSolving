#include <bits/stdc++.h>

using namespace std;

int main()
{
  int arr[100][100]  , n ,sumPrimary = 0 , sumSecondary =0 ;
  cin >> n ;
  for (int i = 0 ; i < n ; i ++ ){
  for(int j = 0 ; j < n  ; j++  ){
  cin >> arr[i][j] ;
  }
  }

   // [0][0]  + [1][1] +  [2][2] + [3][3]  --> primary diagonal
   // [0][3] + [1][2] + [2][1] + [3][0]  -->secondary diagonal

  for (int i = 0 ; i < n ; i ++ ){
  for(int j = 0 ; j < n  ; j++  ){
    if(i==j){
        sumPrimary+=arr[i][j] ;
    }
  }
  }

   for (int i = 0 ; i < n ; i ++ ){     //[0][3] [1] [2]   [2][1] [3][0]
   for(int j = n-i-1 ; j >=0   ; j--  ){

    sumSecondary+=arr[i][j] ;
    j = 0   ;
  }
  }

  cout << abs(sumPrimary - sumSecondary) ;


    return 0;
}
