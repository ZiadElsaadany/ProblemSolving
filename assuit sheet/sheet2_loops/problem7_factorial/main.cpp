#include <iostream>
using namespace std;
int main(){
//problem 7 factorial

 int
 3n;
 cin >> n;
 long long fact =  1;
 // 5 * 4 * 3 * 2 * 1
 int number ;
 for(int i = 0 ; i<n; i++){
        cin >> number ;

    for(int j= number ; j>0 ;j--){
        fact = fact*  j ;
    }
    cout <<fact <<endl;
    fact = 1  ;
 }
}
