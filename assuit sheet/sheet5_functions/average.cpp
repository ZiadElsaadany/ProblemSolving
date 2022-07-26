#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
double sum(double num ,double sum) {
    sum+=num;
    return sum ;
}
int main(){
short tc;
cin >> tc;
double num;
double sum1 = 0;
int counter =  0;
while(tc--){
    cin >> num ;
    sum1 = sum(num , sum1);
    counter++;
}
cout  << fixed<<setprecision(7) << sum1/counter <<endl;
}
