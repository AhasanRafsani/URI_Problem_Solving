#include<iostream>
using namespace std;
main()
{
 int i,j;
 int sum=0;
 int arr[4][4]={
  {2,4,3,4},
  {1,2,3,4},
  {4,2,3,4},
  {1,2,3,4}
 };
 for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
      if(j>=1+i)
        sum=sum+arr[i][j];
    }

 }
 cout<<sum;

}

