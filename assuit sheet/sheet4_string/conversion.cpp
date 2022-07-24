#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
   string name ;
   cin >> name  ;

   for(int i  =  0  ; i <name.length( ) ; i++ ){
        char a = name[i] ;
       if( a == ','){
        a = ' ' ;
        cout <<a ;
       }
    else if(a >='a' && a<='z') {
      cout << char(a-32);
   }
   else if(a >='A' && a<='Z'){

   cout << char(a+32) ;
   }
   }

    return 0;
}
