#include<iostream>
using namespace std;

main()
{
  int credit=0,n;
  float  gpa=0.0,c,g;
  cout<<"total Subject";
  cin>>n;
  int i=0;
  while(i!=n)
  {   cout<<"Subject:-->>"<<i+1<<endl;
      cout<<"Credit:";
      cin>>c;
      cout<<"Gpa:";
      cin>>g;

      float pa=c*g;
      credit=credit+c;
      gpa=gpa+pa;

       /* cout<<"<----------------------->"<<endl;
      cout<<" total Credit:"<<credit<<endl;

      cout<<" total Gpa:"<<gpa<<endl;
      cout<<"<----------------------->"<<endl;*/


     i++;
  }
 cout<<"<----------------------->"<<endl;
 float total=gpa/credit;
 cout<<"Total CGPA: "<<total<<endl;
}
