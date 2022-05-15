#include<iostream>
using namespace std;
main()
{
int buy,cus,chg,j=0 ;
int arr[10]={100,50,20,10,5,2};

while(1){
cout<<"Enter buy price";
cin>>buy;
cout<<"Enter customer price";
cin>>cus;
      if((buy==0) && (cus==0)){
          break;
      }

     chg=cus-buy;

for(int i=0;i<6;i++)
  {
  if(chg>=arr[i]){
     int left=chg-arr[i];
     chg=left;
     j++;
        if(j==2){
            break;
        }

}


}
if((j<=2) && (j>0)){
    cout<<"Possible"<<endl;}
    else
      cout<<"Not Possible"<<endl;
}
}
