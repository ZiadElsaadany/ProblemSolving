
#include <bits/stdc++.h>
using namespace std;

bool oddOrNOt(int number ) {
      if(number%2!=0)
        return true ;

      return false ;
}
bool  binaryRepPalindromeOrNot(int number ) {
   int arr[100]  ;
   int  j = 0  ;
   int sizee =sizeof(arr)/sizeof(arr[0]);
   int counter  = 0   ;

     while(number != 0 )  {
             arr[j] = number%2  ;
             counter++;
             number/= 2;
             j++;
     }

     for  ( int  i = 0  ; i < counter ; i++ ) {
        if( arr[i] != arr[counter-i-1]) return false;
      }
      return true ;

}

int main ( ) {

int number  ;
cin  >> number  ;
if ( oddOrNOt(number)&& binaryRepPalindromeOrNot(number) )  cout  << "YES" <<endl;
 else     cout  << "NO" <<endl ;

}
//   2^0  2^1  2^2  2^3  2^4  2^5
    //   1    2    4    8    16   32

      // 5
       //   5/2 = 2  reminder = 1
       //   2/2  = 1          = 0
       //   1/2  =0             1    ------> yes
       //   0/2  = 0            0

       //3
        // 3/2 = 1       re =  1  ------------> yes
        // 1/2 = 0       re =  1

        //4
        // 4/2  =2              0
        // 2/2  =1              0     ----------> no
        // 1/2=  0              1
