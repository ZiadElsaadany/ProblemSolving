#include <iostream>
using namespace std;

int main() {
int n,e=1,i,j,c;
cin >> n ;
for( i=1;i<=n ; i++){
    for(j=n-1;j>=i;j--){
        cout << " ";
        }
        for(c=0 ;c<e;c++){
            cout << "*";
        }
        cout << endl;
        e+=2;
    }

int y,r,s;
y=2*n-1;

for( r=1;r<=n;r++){
   for(c=0 ; c<y ; c++){
    cout << "*" ;
}
   cout << endl;
   y-=2;
   for(s=0;s<r;s++){
       cout << " " ;
   }
   }
   cout << endl ;

    return 0;
}
