#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a , b ;
    cin >>a >> b ;

    cout <<a.length() << " " << b.length() <<endl;
    string c;
    c = a+b ;
    cout <<c <<endl;
    char temp ;
   temp =a[0];
   a[0] =b[0] ;
   b[0]=temp ;
   cout <<   a  << " " <<b ;
    return 0;
}
