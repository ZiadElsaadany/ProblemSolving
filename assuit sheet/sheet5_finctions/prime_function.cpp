
#include <bits/stdc++.h>
using namespace std ;
bool primeOrNot ( int number  ){

for (int i =   2  ; i <=sqrt(number) ; i++ ){

        if(number%i == 0 ) {
        return false;
    }
}
return true ;
}


int main( ) {

short tc  ;
cin >> tc;
int number  ;
while (tc--) {
    cin >> number  ;
    if(number == 1 )  {
        cout  << "NO" <<endl ;
        continue ;
    }
    if(primeOrNot(number)) {
        cout  << "YES" <<endl ;
    }else {
    cout  << "NO"  <<endl ;
    }

}

}
