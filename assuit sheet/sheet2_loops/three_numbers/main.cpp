#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k , s;
    cin >> k>>s;
    /// x + y + z = s      0<= x, y , z <=                 0<=k <=3000 <=s <=3000
     // z = s-x-y
     int counter = 0 ;
     for (int x = 0 ; x <=k ; x++  ){
        for(int y= 0 ; y<=k ; y++ ){
            long long  z  = s-x-y;

            if(z < 0  || z> k )continue;
            if(x+y+z == s  ){
                counter ++ ;
            }
        }
     }
     cout << counter;
    return 0;
}
