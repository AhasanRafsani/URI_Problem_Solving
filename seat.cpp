#include<iostream>
using namespace std;
main()
{
  int i,n;
  string j;
  cout<<"seat";
  cin>>n;
 int  c=1;
  while(c<=4){

  for(i=1;i<=n;i++)
  {
   if(c==c++)
   cout<< " |-| " ;
     else
        cout<<"|*|";
  }
  cout<<endl;
  c++;
  }
}
