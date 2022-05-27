#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc ;
  cin >> tc ;
  while(tc-- ){
    int n ;
    cin >> n ;
    int arr[100000] ;
    int mx =INT_MIN;
    for(int i = 0 ; i <n ; i++ ){
        cin >> arr[i] ;
  }
  for (int i = 0 ; i<n ; i++  ){
        cout << arr[i] << " " ;
        mx= arr[i];
    for (int j= i+ 1  ;  j <n ; j ++ ){
        if(arr[j] >mx) {
                mx =arr[j];
            cout << arr[j] <<" ";
            }
            else{
            cout << mx << " ";
            }
    }
  }
  cout <<endl ;
  }
    return 0;
}
