#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc  ;
    cin >> tc ;
    while(tc-- ){
            string name  ;
           bool flag =false ;
              cin >>name;
       for(int i = 0 ; i<name.length() ; i++ ){
            flag= false;
        if(name[i]== '0'&&name[i+1]=='1'&&name[i+2]=='0' ){
           flag =true  ;
           break ;
        }
        else if (name[i]== '1'&&name[i+1]=='0'&&name[i+2]=='1' ) {
           flag =true  ;
           break ;
           }
        else {
        flag =false;
        }
       }
       if(flag){
        cout <<"Good" <<endl ;
       }else{
       cout << "Bad"<<endl ;
       }
}
    return 0;
}
