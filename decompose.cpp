#include <iostream>
using namespace std;


int main()
{
 int temp,n,j,i,amount,c=0,sum=0,mul=0;
 int arr[]={100,50,20,10,5,2,1};

   cout<<"size";
   cin>>n;
   //for(int i=0;i<n;i++){
   //cin>>arr[i];}
   cout<<"Total amount";
   cin>>amount;

  for(int i =0 ; i <7 ; i++)
    {
       for(int j =1; j<n ; j++)
        {

            if(sum<=amount)
            {
                mul=arr[i]*1;
                sum=sum+mul;
                c++;
}


}

           sum=sum-arr[i];
           c=c-1;
           cout<<c<<" Note de R$: "<<arr[i]<<" sum: "<<sum<<endl;

            c=0;
            mul=0;

}
}
