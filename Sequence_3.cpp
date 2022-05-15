#include<iostream>
using namespace std;
main()
{
  int i,j,k=0;
  for(i=1;i<=9;i=i+2)
  {
      for( j=7+k ;j>=5+k; j--){

      cout<<"I="<<i<<" "<<"J="<<j<<endl;

      }
       k=k+2;
  }
}

