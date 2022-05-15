#include <iostream>
using namespace std;


int main()
{
 int ammount,time,left,note;
 int arr[]={100,50,20,10,5,2,1};



   cout<<"Total amount";
   cin>>ammount;

   for(int i=0 ;i<7;i++){
    note=arr[i];
   if(ammount>=note)
   {
       time=ammount/note;
       left=ammount%note;
       ammount=left;
   }




    cout<<time<<" note(s) de R$ :"<< note<<endl;
    time=0;
   }

}

