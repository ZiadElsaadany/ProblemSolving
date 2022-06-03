#include <bits/stdc++.h>
using namespace std;

int main()
{
       string name  ;
    int counter= 0  ;
   cin >> name ;
  sort(name.begin() , name.end());    //ton sort string  you can use sort function  --> sort (arr.begin(),arr.end()) ;
   for(int i  = 0 ; i <name.length(); i++ ){
       if(name[i] == name[i+1]){
        counter++ ;     //aa
       }else {
           counter ++ ;   //aab

       cout << name[i] << " : " << counter <<endl ;
       counter = 0  ;
       }
   }
    return 0;
}

