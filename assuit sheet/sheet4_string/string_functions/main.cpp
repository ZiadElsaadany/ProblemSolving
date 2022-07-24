#include<bits/stdc++.h>
using namespace std;
int main ( ) {

 int sizee , numberOfQueries  ;
 cin >>sizee >> numberOfQueries;
 int index1 ,index2 ;
 string  word , query;
 cin >> word;

 while(numberOfQueries--) {
      cin >> query ;
      if(query == "substr"){
          cin >> index1 >>index2 ;
          for(int i =  min(index1 ,index2 ) - 1 ; i<max(index1 ,index2); i ++  )  {
            cout  << word[i] ;
          }
          cout  <<endl ;
      }
      else if(query == "sort"){
                cin >> index1 >>index2 ;
    sort(word.begin()+min(index1,index2)-1 , word.begin()+max(index1,index2)) ;

      }  else if(query == "pop_back"){
        word.pop_back() ;
      }  else if(query == "back"){
           cout << word.back() <<endl ;
      } else if(query == "reverse"){
          cin >> index1 >>index2 ;
          reverse(word.begin()+min(index1,index2)-1 , word.begin()+max(index1,index2)) ;
      }else if(query == "front"){
        cout <<word.front() <<endl ;
      }else if ( query == "push_back" ) {
          char ch ;
          cin >> ch ;
        word.push_back(ch);
      }else if ( query == "print" ) {
        cin >> index1 ;
        cout << word[index1-1]<<endl;
      }
    }

}
/// assi(utin)upperegypt
//substr 1 6  assiut (index = 0 to 5)
// sort 5 8   u->n   (index = 4 to 7) assiintuupperegypt
// pop_back     assiintuupperegyp  remove last character
//back     print the last character   --> p
//reverse 1 6      a->n (index=0 index= 5)  niisatuupperegyp
//front       print first character   n
//push_back i  niisatuupperegypi
//print 4       index= 3
