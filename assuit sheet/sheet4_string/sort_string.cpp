#include <bits/stdc++.h>
using namespace std ;
int main (  ) {           // a b c d e
    int arr[26] = {0} ;   // 0 0 0 0 0
    int  sizee;
  cin >> sizee;
 // deab   {a 1,b 1,0,d 1, e 1} --> abde

for (int i = 0 ; i < sizee ; i ++ ) {
    char c;
    cin >> c;
    arr[(int)c  -  97] ++;     // if c = a --> 0+1 = 1   1 0 0 0 0
}
//aabbccc   0  1   2
 // arr =  {2, 2 , 3}
/// arr -> numbers for every character and store it in array
for ( int i = 0  ; i < 26 ; i ++ ) {
    while (arr[i]!=0) {
        cout  <<  (char)(i+97);
        arr[i] -- ;
    }
}

}

/// deab   -->   abde
