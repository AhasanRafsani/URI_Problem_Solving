#include <iostream>
using namespace std;


int main()
{
 int temp,i,n,j=0;
 int t[100],arr[100];

   cout<<"size";
   cin>>n;
   for(int i=0;i<=n;i++){
   cin>>arr[i];}

for(int i =0 ; i <=n ; i++)
{
    if( arr[i]<arr[i+1] )
    {
       temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
    }

}
   cout<<"Print";

   for(int i=0;i<=n;i++){
   cout<<arr[i];}
}
