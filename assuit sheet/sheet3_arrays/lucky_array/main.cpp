
#include <bits/stdc++.h>
using namespace std ;
int main ( ) {

int arr[1000] , n , counter=0;
cin >> n;
for (int i = 0 ; i < n ; i++ ){
    cin >> arr[i];
}  //5    --> 8 8 9 5 9

int minimum =  100000 ;
for (int i =  0 ; i < n ; i ++ ){
    if(minimum  > arr[i]){
        minimum   = arr[i];
    }
}

for (int i =  0 ; i < n ; i ++ ){
    if(minimum  == arr[i]){
         counter ++ ;
    }
}
if(counter%2!=0){
    cout << "Lucky"<<endl;
}else{
cout << "Unlucky"<<endl;
}

}
