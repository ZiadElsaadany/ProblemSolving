#include <bits/stdc++.h>
using namespace std;
int main( ){
   short n ;
   cin >> n ;
int num1=0  , num2= 1 ,  num3=0;

for( int i = 0 ; i< n ; i++ ){
        if(i == 0){
            cout << num1 << " " ;
            continue ;
        }else if(i == 1){
        cout << num2 <<" ";
        continue ;
        }
    num3 =num1 +num2 ;
     num1 = num2 ;
    num2 = num3 ;
    cout << num3 << " " ;


}

}
