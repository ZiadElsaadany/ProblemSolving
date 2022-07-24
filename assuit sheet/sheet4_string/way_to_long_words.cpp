#include <bits/stdc++.h>

using namespace std;

int main()
{
   int  n ;
   cin >> n  ;
   string word;
     for (int i = 0 ; i<n ; i++ ) {
        cin >> word ;
        if(word.length() <= 10 ){
            cout << word <<endl ;
        }else {
            int  len = word.length()-2 ;
        cout << word[0] << len <<word[word.length()-1] <<endl ;
        }
     }
    return 0;
}
