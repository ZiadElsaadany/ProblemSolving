#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc ;
  cin >> tc;
  while(tc-- ){
    char n1[51] ;
    char n2[51] ;                      //n1[0]+n2[0]   //n1[1] +n2[1]
    cin >> n1 >> n2 ;   // ipAsu ccsit      i+c


    for(int i = 0 ; i < max(strlen(n1),strlen(n2)) ; i ++){
          if(strlen(n1) > i ){
            cout << n1[i] ;
          }
          if(strlen(n2) > i){
            cout << n2[i];
          }

    }
    cout <<endl ;

  }

    return 0;
}

