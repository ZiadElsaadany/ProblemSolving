#include <bits/stdc++.h>

using namespace std;

int main()
{
   int tc ;
   cin >> tc ;
   while (tc--){
    int n ;
    long long result = 0 ;
    int cnt= 0 ;
    cin >> n;
    while (n!=0){

        if(n%2==1) cnt++ ;

        n=n/2 ;
    }
    for ( int  i = 0 ; i< cnt ; i ++ ){
        result = result + pow(2,i);
    }
    cout  << result <<endl ;
   }
    return 0;
}
