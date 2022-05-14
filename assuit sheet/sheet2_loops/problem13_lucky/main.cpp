#include <bits/stdc++.h>
using namespace std;
int main ()  {

string num1 , num2 ;
cin >> num1 >> num2 ;
int maximum = max (num1.length() , num2.length() );
bool flag = true;
for (int i = 0 ; i < maximum ; i++) {

    if( num1[i] != 4 ||num1[i] != 7 ||  num2[i] != 4   || num2[i]!=7){
     flag =false  ;
        break ;
    }

}
        if (flag){
            cout << 4 << " "  << 7 ;
            }

}
