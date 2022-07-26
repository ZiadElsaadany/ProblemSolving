#include <bits/stdc++.h>
using namespace std ;
void swapp (int num1 ,int num2) {
 int temp ;
 temp = num1 ;
 num1 =num2 ;
 num2 =temp ;
 cout << num1 << " " <<num2  <<endl ;
}
int main() {
int number1 ,number2 ;
cin >> number1 >>number2 ;
swapp(number1 ,number2) ;
}
