#include<iostream>
using namespace std;
main()
{
int i,n,k=1;
int arr[10];
cin>>n;
for(i=0;i<10;i++){

   arr[i]=n*k;
   k=k*2;

}

  cout<<" array print"<<endl;
  for(i=0;i<10;i++){
  cout<<" X ["<<i<<"] ="<<arr[i]<<endl;

}
}
