#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name ;
    cin >> name  ;
    int counter = 0 ;
    int counter2 = 0;
    for(int i = 0; i< name.length() ; i+=counter2 ){ //aaabbc   a=3 2
       counter ++ ;                                  //012345
       loop :
       if(name[counter2] == name[counter2+1] ){
        counter2++ ;
        counter ++ ;
        goto loop ;
       }
       cout << name[i] << " : " <<counter<<endl ;
       counter = 0 ;
    counter2++ ;
    }


    return 0;
}

