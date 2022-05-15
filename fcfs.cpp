#include<iostream>

using namespace std;

int main()
{
    int burst[]={24,3,4};
    int waiting[3];
    int turnaround[3];
    /*
    waiting[0]=process 1
    waiting[1]=process 2
    waiting[2]=process 3
    */
    waiting[0]=0;
    for(int j=1;j<3;j++)
    {
        waiting[j]=waiting[j-1]+burst[j-1];
    }

    int totalwaiting=0;

    for(int k=0; k<3; k++)
    {
        totalwaiting=totalwaiting+waiting[k];
    }

    int avrwait=totalwaiting/3;

    for(int i=0;i<3;i++)
    {
        cout<<"waiting time of "<<i<< " is: " <<waiting[i]<<" ";
    }
    cout<<"\naverage waiting time: "<< avrwait;

    cout<<"\n";
    //turnaround time calculation
    for(int m=0; m<3 ; m++)
    {
        turnaround[m]=waiting[m]+burst[m];
    }

    for(int i=0;i<3;i++)
    {
        cout<<"turn around time of "<<i<< " is: "<< turnaround[i]<<" ";
    }

     int totalturn=0;





    return 0;

}
