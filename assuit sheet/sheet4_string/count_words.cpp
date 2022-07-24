
#include <bits/stdc++.h>
using namespace std;
int main ( )  {
string word , result;
     getline(cin , word);// Meep Meep!
     // "Meep
    int counter  = 0 ;
    for (int  i = 0  ;  i <word.size() ; i ++ ) {
        if(word[i] != '.'&& word[i] != '!' && word[i] != '?' &&  word[i] != ','  &&  word[i]!=' ' ) {
                result  += word[i];
        }
         if  ( (word[i] == '.'|| word[i] == '!' ||  word[i] == '?' ||  word[i] == ',' ||  word[i]==' ' || i == word.size()-1) &&result.size()!=0 ) {
            counter  ++ ;
            result = "" ;

        }


    }

    cout   << counter  <<endl;
}
