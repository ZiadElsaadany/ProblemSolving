#include <iostream>
using namespace std ;
int main(){

//problem 2   Even Numbers

int n;
cin >> n;
if(n>1){
for(int i = 2 ; i<=n ;i++){
        if(i%2==0)
    cout << i <<endl ;
 }
}else{
cout <<-1;
}


}

