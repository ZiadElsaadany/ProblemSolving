#include <iostream>

using namespace std;

void nTime(int number , char ch ) {

    for(int i = 0 ; i<number ; i++ ) {
        if(i==number-1)cout << ch ;
        else cout << ch << " " ;
    }
}
int main()
{
    int  tc  ;
    cin >> tc  ;
    int number  ;
    char ch ;
    while(tc--){
        cin >> number ;
        cin >> ch ;
        nTime(number , ch);
        cout  << endl;
    }
}

