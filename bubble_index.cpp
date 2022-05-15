#include <iostream>
using namespace std;


int main()
{
 int temp,n,j,i,k=0,v=0;
 int t[100],arr[100];

   cout<<"size";
   cin>>n;
   for(int i=0;i<=n;i++){
   cin>>arr[i];}

for(int i =0 ; i <=n ; i++)
    {
       for(int j =0; j<=n ; j++)
        {
            if(arr[i]==arr[j])
            {

            k++;

            }


        }

         cout<<"Value:"<<arr[i]<<"Times:"<<k<<endl;

         k=0;



    }
}


