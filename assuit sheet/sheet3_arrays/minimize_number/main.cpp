#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool flag = false;
    int counter = 0 ;
    short n;
    cin >> n;
    long long arr[200];

      for (int i = 0 ; i<n; i ++ ){
        cin >> arr[i];
  }

  loop :
  for(int i = 0 ; i<n ;  i++ ){

   if(arr[i]%2 == 0 ){
    flag =true;
   }else{
   flag = false;
   break;
   }
  }
  if(flag){
        counter ++;
    for(int i = 0 ; i<n ; i++ ){
        arr[i] =arr[i]/2 ;
    }
    goto loop ;
  }else{
  cout << counter <<endl;
  }
    return 0;
}
