#include<iostream>
using namespace std;
main()
{
int i,n,k=0;
int arr[10] ,pos[10],index[10];
cout<<"Enter array:";
for(i=0;i<10;i++){
cin>>arr[i];
}

for(i=0;i<10;i++){
 if(arr[i]<=5)
 {
    pos[k]=arr[i];
    index[k]=i;
    k++;
 }
}

  cout<<" array print"<<endl;
  for(i=0;i<k;i++){
  cout<<pos[i]<<" position "<<index[i]<<endl;

}
}

