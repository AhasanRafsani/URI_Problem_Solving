#include <iostream>
using namespace std;


int main()
{
 int i,j,n,k=0;
 cin>>n;

 for(i=0;i<=n;i++) {

    for(j=0;j<=n;j++){
        if(j>=i){
         break;

        }

          cout<<i<<" ";

    }
     k=k+j;

 }
   cout<<"Number"<<k;
}
