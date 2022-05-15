#include <iostream>
using namespace std;




main(){

int arr1[100],arr2[100];
int size1,s1,s2,i,j=0;

cout<<"size of array";
cin>>size1;
cout<<"enter into  array";
for(i=0;i<size1;i++){

  cin>>arr1[i];

}
cout<<" search in array";
cin>>s1;
cout<<"search into  array";
for(i=0;i<s1;i++){

  cin>>arr2[i];
}

for(i=0;i<size1;i++){

  if(arr1[i]==arr2[j++]){
  cout<<"found"<<i;
  }

}



}
