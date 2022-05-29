#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name ;
    cin >> name ;
    for(int i = 0 ; i<name.length() ; i ++ ){
        if(name[i]!=name[name.length()-1-i]){
            cout << "NO" <<endl ;
            return 0  ;
        }
    }
    cout << "YES" ;

    return 0;
}
