#include <iostream>

using namespace std;

int main()
{

  int arr[50] ;
  short  n ;
  cin >> n ;
  for  ( int i =0; i <n ; i ++ ) {

     if(i  ==  0 ){
        arr[0] = 0 ;
        continue ;
     }else if( i ==  1 ) {
     arr[1 ]  = 1;
     continue ;
     }
     arr[i] = arr[i-1]+arr[i-2] ;    //  2      1  + 0
                                    //   3      2 + 1
                                    }

  cout << arr[n-1] <<endl;


    return 0;
}
