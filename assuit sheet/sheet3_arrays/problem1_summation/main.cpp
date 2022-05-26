
#include <iostream>
using namespace std;
int main(){

 int n ;
    cin >> n ;
    int arr [n ];
    long long summation=  0 ;
    for ( int i = 0 ; i < n ; i ++ ){
        cin >> arr[i] ;
        summation += arr[i] ;
    }
    if(summation < 0 ) {
        cout <<  summation * -1;
    }else{
    cout << summation ;
    }

}
