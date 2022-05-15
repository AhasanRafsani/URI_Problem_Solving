#include <iostream>
using namespace std;


int main()
{
 int ammount,time,left,i=0;
 char arr[100];



   cout<<"Total amount";
   cin>>ammount;
while(ammount!=0)
{

   if(ammount>=1000)
   {
    left=ammount-1000;
    ammount=left;
    arr[i] ='M';
   }
  else if(ammount>=500)
   {
    left=ammount-500;
    ammount=left;
        arr[i]='D';

   }

   else if(ammount>=100)
   {
    left=ammount-100;
    ammount=left;
        arr[i]='C';

   }

  else if(ammount>=50)
   {
    left=ammount-50;
    ammount=left;
        arr[i]='L';

   }

else if(ammount>=10)
  {
   left=ammount-10;
    ammount=left;
        arr[i]='X';

 }
else if(ammount>=5)
  {
   left=ammount-5;
    ammount=left;
        arr[i]='V';

 }
else if(ammount>=1)
  {
   left=ammount-1;
    ammount=left;
        arr[i]='I';

 }
i++;


}

    cout<<arr<<endl;



}

