#include <iostream>
using namespace std;
int main(){
int number  ;

while(true){
    cin >> number ;
    if(number != 1999){
        cout << "Wrong" <<endl ;
    }
    else{
        cout << "Correct" <<endl;
        break;
    }
}
}
