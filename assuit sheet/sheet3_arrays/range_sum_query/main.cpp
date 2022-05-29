#include <bits/stdc++.h>

using namespace std;

int main()
{
int n , q ;    // 6 3
long long arr[100000]  ;  ///6 4 2 7 2 7      1 3


long long arr2[100000] ;  /// 6 10 12 19 21 28   ÍãÚ ßá ÇáÇÑŞÇã Çááí ŞÈá


cin >> n >> q  ;
for ( int  i = 0 ; i<n ; i++ ){
    cin >> arr[i];   // 6 4 2 7 2 7
    if(i==0){
        arr2[i] =arr[i];
    }else{
    arr2[i] = arr[i] + arr2[i-1];
    }
}
int l ,r ;
 while(q--){
    int start,ennd;
    cin >> start >> ennd ;
    start--;
    ennd--;
    long long sum = arr2[ennd]-arr2[start]+arr[start] ;
    cout <<sum<<endl;
 }

    return 0;
}
/**
int arr2[100000][2] ;
      for (int  i =  0  ;  i < q ; i ++ ){
            for(int j = 0 ; j< 2 ; j++ ){
                    sum =  0  ;
               cin >> arr2[i][j] ;
               }

                int x = arr2[i][0];  // 1
                int z  = arr2[i][1]; // 3
for(int k = x ; k<=z ; k++){
 sum+=arr[k-1] ;
                 }
cout << sum <<endl;
}

/
/
input

6 3
6 4 2 7 2 7

1 3
3 6
1 6

/
/
output

12   1 : 3   6+4+2 = 12
18   3 : 6   2+7+2+7 = 18
28   1 : 6   6+4+2+7+2+7= 28

**/
