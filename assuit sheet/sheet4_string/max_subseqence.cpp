#include <bits/stdc++.h>
using namespace std;
 int main ( )  {
 string word;
 int sizee ;
 cin >> sizee;
 cin >> word;
 int i = 0 ;
 int counter   = 1 ;
for  ( int  i = 0  ; i < sizee-1 ;  i ++ )  {
    if(word[i]!= word[i+1]) {
        counter ++   ;
    }
}
cout  << counter  <<endl ;
 }
