#include<iostream>
using namespace std;
main()
{
int i,n;
int arr[10];
cout<<"Enter array size";
cin>>n;
for(i=0;i<n;i++){
  cin>>arr[i];

}
  for(i=0;i<n;i++){

  if((arr[i]==NULL) || (arr[i]<=0)) {

    arr[i]=1;
  }

}
cout<<" array print"<<endl;
 for(i=0;i<n;i++){
  cout<<" X ["<<i<<"] ="<<arr[i]<<endl;

}
}

