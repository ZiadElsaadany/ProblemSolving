#include <bits/stdc++.h>
 using namespace std;

  int main (  ) {
  string myWord= "hello" ;
  string value ;
  cin >> value  ;

   int i = 0  ;
   int x= 0 ;

   while(true) {
    if(x==myWord.size ( ) || i  ==value.size()){
        break;
    }
    if(value[i] == myWord[x]) {
        x++ ;
    }

    i++ ;

   }
    if(x== 5 ) {
        cout  << "YES" <<endl;
    } else {
    cout << "NO"<<endl;
    }
   }

   /**

          **/
