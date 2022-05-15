#include <iostream>
using namespace std;


int main()
{


 int temp,i,n,sum=0;
int  arr[100];

   cout<<"size";
   cin>>n;
   for(int i=0;i<n;i++){
   cin>>arr[i];}

   for(int i =0 ; i<n; i=i+2)
  {

  sum=sum+arr[i];
  cout<<sum;
  }
   cout<<"Print-->"<<endl;
   cout<<sum;


}
