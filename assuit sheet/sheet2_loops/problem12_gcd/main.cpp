#include <bits/stdc++.h>
using namespace std;
int main (){
int num1 , num2 ;
cin >> num1 >>num2 ;
int maximum  =   max(num1,num2);
int m = -10000000 ;
  for ( int i = 1 ; i <=maximum/2 ; i++){
    if(num1 % i==0 && num2%i ==0)
    {
         if(i>m){
            m = i  ;
         }
    }
    }
    cout << m ;

}
