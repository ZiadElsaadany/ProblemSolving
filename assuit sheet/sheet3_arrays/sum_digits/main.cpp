#include <bits/stdc++.h>
using namespace std;
int main ( ){

char arr[1000000] ;
int n ;
cin >> n ;
int sum=  0 ;
for (int  i =0 ; i <n ; i++  ) {
    cin >> arr[i] ;
     sum =sum +  int(arr[i])-48 ;
}

cout << sum ;
}
//5-->13305= 12

