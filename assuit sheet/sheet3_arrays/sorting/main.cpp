#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[1000] , n ;
cin >> n;
int temp   ;
for(int i = 0 ;i <n ; i ++ ){
    cin >> arr[i] ;
}
for (int i  = 0 ; i< n ; i++ ) {
    for(int j = 0 ; j< n ;j++) {
        if(arr[j] > arr[i]) {
                temp = arr[j] ;
                 arr[j] = arr[i];
                 arr[i] =temp ;
        }
    }
}
for(int i = 0 ;i <n ; i ++ ){
    cout << arr[i] << " " ;
}

}
