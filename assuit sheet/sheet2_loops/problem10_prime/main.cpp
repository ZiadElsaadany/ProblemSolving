
#include<iostream>

using namespace std;

int main(){

    /**
    int n;

    bool isPrime  ;  /// true  -- > not prime    ,  false --> prime

    cin >> n;   /// 10

    for(int i = 2; i <= n; i++){ /// 2 3 4 5 6 7 8 9 10
        isPrime = false;    /// prime
         // 5
         // 7


        for(int j = 2;j= ;j <= i/2; j++){  // j=2  i=2   j<=1
     //4 % 2 ==0
     // 5  % 2 == 0 x

      // 7 % 2 == 0 x
      // 7 % 3 == 0 x
        if(i % j == 0){
                 isPrime = true;   // not prime
                 break;
             }
        }  /// 2 no   3 no

        if(isPrime==false && n!= 1)
            cout << i << " "; /// 2 3 5 7
    }
    **/





    int num;
    cin  >> num  ;

     bool isPrime ;

     for ( int  y = 2 ; y <= num ; y++ ) {

        isPrime = false;  // not prime
        int x;
        x= y-1 ;  //x= 2
        while ( x >1 && x > y/2) {
                if( y%x== 0  ){
                    isPrime = true ;
                    x--;
                }

        }
           if( isPrime==false && num!=1 )
            cout << y << "\n";
            }

     }


