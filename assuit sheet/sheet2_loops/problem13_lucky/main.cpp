#include <bits/stdc++.h>
using namespace std;
int main ()  {

int num1 , num2 ;
cin >> num1 >> num2 ;
    //4 7
int counter ;
bool flag;
bool check =true ;

for( int i =min(num1 ,num2 )  ; i<=max(num1,num2);i++){
       counter = i ;
       flag= 0 ;
       while(counter != 0 ){

        short digit= counter%10 ;
        counter = counter /10 ;

        if(digit !=4 && digit !=7){
            flag = 1 ;
        }
       }
       if(flag == 0 ){
        cout << i << " ";
        check = false;
       }

}
if (check){
    cout << -1<<endl;
}

}
