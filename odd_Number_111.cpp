#include<iostream>
using namespace std;
main()
{
 int n;
 cout<<"Test case";
 cin>>n;
 int j=0;
 while(j!=n){
     int x,y;
     int i=0,sum=0;
      cout<<"enter x and y"<<endl;
      cin>>x>>y;
      while(i!=y){
      if(x%2!=0){
        sum=sum+x;
        i++;
     }
     x++;

 }
 cout<<sum<<endl;
 j++;
 }


}
