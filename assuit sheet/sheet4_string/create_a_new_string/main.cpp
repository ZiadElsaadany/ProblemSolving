#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t ;
    cin >> s >>t;
    cout << s.length() << " " << t.length() <<endl;
    string newString = s + " "+t;
    cout <<newString ;
    return 0;
}
