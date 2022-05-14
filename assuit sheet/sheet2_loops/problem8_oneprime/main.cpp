
#include <iostream>
using namespace std;
int main (){

//problem 8 prime

 int number ;
 cin >> number ;
  bool flag =true;
  for (int i =2 ; i<=number / 2 ; i++){
    if(number % i == 0) {
       flag =false;
        break ;
    }
    else{
        flag=true;
    }
  }
  if(flag)
    cout << "YES";
  else
  cout << "NO";
}
