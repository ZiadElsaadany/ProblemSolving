#include <bits/stdc++.h>
using namespace std;
 int main  (  )  {
 /// You love me\0
 ///We are a happy family

 string word;
 string res="";

 getline(cin, word)  ;
 int i = 0 ;
 while(true){
         if(i == word.size()) {
            break;
         }

                   if(word[i]!=' ') {
                          res+=word[i] ;
                    if( i == word.size() -1 ) {
                         reverse(res.begin(),res.end()) ;
                         cout  << res ;
                    }

      }
      else{
          reverse(res.begin(),res.end()) ;
           cout << res << " " ;


        res = "" ;

      }

    i++;

 }

 }
