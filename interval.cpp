#include<iostream>
using namespace std;
main()
{
    float n;
    cout<<"Number";
    cin>>n;
    if((n<0) || (n>100))
    {
       cout<<"out of range" ;

    }
    else if((n>=0) && (n<=25.0000))
    {
         cout<<"Interval (0.25)" ;
    }

    else if((n>=25.00001) && (n<=50.0000000))
    {
         cout<<"Interval (25.50)" ;
    }
    else if((n>=50.00000001) && (n<=75,100))
    {
         cout<<"Interval (75,100)" ;
    }

}

