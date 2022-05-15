#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;

class bubble_sort
{
float a[1000];

int i,j,n;
  public:

        int file_input();
        void display();

};

int bubble_sort::file_input()
{

  float num;
  cout<<"size";
  cin>>n;
  //freopen("in.txt","w",stdout);
  srand(time(0));
    for(i=0;i<n;i++){
  num= (rand()%700-350);
    a[i]=num;
   cout<<a[i]<<"\t";}
}
void bubble_sort:: display()
{ float temp;

   // for(i =1 ; i <n ; i++)
   // {
       // for(j =0; j <(n-i) ; j++)
        //{
            //if(b[j+1]< b[j])
            //{
           // temp=b[j];
           // //b[j]=b[j+1];
           // b[j+1]=temp;
           // }
//
    //}
    //}
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp<a[j]&&(j>0)){
            a[j+1]=a[j];
        j=j-1;
        }
        a[j+1]=temp;
    }
    cout<<"bubble sort\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t ";

}

int main()
{
    clock_t start, end;
double ct;
    bubble_sort o1;
    o1.file_input();

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
start=clock();
    o1.display();
end=clock();
  cout<<"time used ";
  cout<<start;
  cout<<end;
  cout<<CLOCKS_PER_SEC;
ct=((double)(end-start))/CLOCKS_PER_SEC;
  cout<<ct;

return 0;
}
