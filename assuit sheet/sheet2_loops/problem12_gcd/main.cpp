#include <bits/stdc++.h>
using namespace std;
int main (){
int num1 , num2 ;
cin >> num1 >>num2 ;
int m = -10000;
  for ( int i = 1 ; i <=max(num1,num2) ; i++){
    if(num1 % i==0 && num2%i ==0)
    {
         if(i>m){
            m = i  ;
         }
    }
    }
    cout << m <<endl;

}
