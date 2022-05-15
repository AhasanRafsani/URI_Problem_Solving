
#include <iostream>
using namespace std;


int main()
{
 int temp,i,n,j=0 ,c, v=1;
 int t[100],arr[100];
 cout<<"Case";
 cin>>c;
while(c>=1)
{


   cout<<"size";
   cin>>n;
   for(int i=0;i<=n;i++){
   cin>>arr[i];}

for(int i =0 ; i <=n ; i++)
{
    if( (arr[i]>arr[i+1]) && (arr[i]>arr[i-1]) )
    {
      t[j]=arr[i];
      j++;
    }

}
   cout<<"Print-->"<<v++<<endl;

   for(int i=0;i<j;i++){
   cout<<"case:1"<<t[i]<<endl;}
   c--;
}
}
