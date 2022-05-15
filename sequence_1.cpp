
#include<iostream>
using namespace std;
main()
{
  int i,j,k=0;
  for(i=1;i<=18;i=i+3)
  {
      for( j=60 ;j>=5; j=j-5){
            if(j==(60-k)){
                    k=k+5;
            break;

            }

      }
      cout<<"I="<<i<<" "<<"J="<<j<<endl;
  }
}
