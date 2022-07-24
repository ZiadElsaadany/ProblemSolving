#include <bits/stdc++.h>
using namespace  std;
int main  ( ) {
    int score  =  0;
    int sizee ;
    cin >>sizee;
     string word ;
     cin >> word;
     for (int i = 0 ; i < word.size() ; i++ )  {
         char oneCh = word[i] ;
         switch( oneCh )  {
            case 'V' :
                  score+=5 ;
                  break ;
            case 'W' :
                  score +=2 ;
                  break ;
            case 'Z' :
                if(word[i+1] == 'V') {
                        score/=5;
                        word[i+1] = 'n' ;
                } else if(word[i+1] == 'W' ){
                    score/=2;
                    word[i+1] = 'n' ;
                    }

                break ;
            case  'Y':
                word.push_back(word[i+1]) ;
                word[i+1] ='n' ;
                break;
            case 'X':
                word[i+1]='n' ;
                break ;

         }
     }
     cout  << score <<endl ;
}
/**

V: Adds to the score 5 points.
W: Adds to the score 2 points.
X: Removes the next consecutive character from the string.
Y: Moves the next consecutive character to the end of the string.
Z: If the next consecutive character is V it divides the total score by 5 but if it is W it divides the total score by 2.
 Then it removes the next consecutive character from the string if and only if the next character is V or W.
*/
//6
// WZYVXW  --> 2
// wzyxwv
// wzyxv      --> 7
