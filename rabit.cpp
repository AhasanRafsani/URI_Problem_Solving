#include<iostream>
#include<ctime>
#include<cstdio>
using namespace std;

void rabbitLoop(int n){
int i=0,rab_now=0,t1=0,t2=1;

while(i<=n-2) {

   rab_now=t1+t2;
   t1=t2;
   t2=rab_now;
   i++;


  }
cout<<rab_now<<endl;

}

int rabbits(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;

        else
            return (rabbits(n-1)+rabbits(n-2));
}



main()
{


   int m,c;
   cout<<"Enter month";
   cin>>m;

   clock_t start = clock();
   cout<<"Rabbit_loop :";
   rabbitLoop(m);
   clock_t finish = clock();
   double time_spent=(double)(finish-start)/CLOCKS_PER_SEC;
   cout<<"rabbit_Loop Time :"<< time_spent<<endl;

   clock_t st = clock();
   c=rabbits(m);
   cout<<"Rabbits :";
   cout<<c<<endl;
   clock_t fi = clock();
   cout<<"rabbit Time :"<<(double)(fi-st)/CLOCKS_PER_SEC;


}
