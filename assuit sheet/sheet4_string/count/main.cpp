#include <bits/stdc++.h>

using namespace std;

int main()
{
    string  n ;
    cin >> n  ;
 int sum= 0 ;
    for (int i = 0 ; i<n.length() ; i++ ){
    char r= n[i] ;
    sum += int(r)-48;
    }
cout << sum ;
    return 0;
}
