
#include <bits/stdc++.h>
using namespace std ;
int main() {
  string number  ;  //12321
  cin >> number ;
  string number2 = number ;  //12321

    bool flag = false ;  // not palindrome

 for (int i = 0 ; i<number.length(); i++){
    if(number[i] == number2[ number.length()- (i+1)]){
        flag =true ;
    }else {
        flag =false ;
        break ;
    }
 }   // flag yes no


 bool check  = 0  ;
 for ( int i = 0 ; i<number.length() ; i ++){


          number[i] = number2[number2.length()-(i+1)] ;
            if(number[i] !=48){
            check = 1 ;
         }

         if(number [i] == '0' && check == 0 ){
                continue ;
         }
    cout << number[i];

} //reversed

 cout << endl ;
 if( flag)
     cout << "YES" <<endl ;
 else
    cout << "NO" <<endl ;

}
