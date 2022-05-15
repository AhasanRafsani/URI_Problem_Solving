#include<iostream>
using namespace std;
void add_edge(int adjacencyMatrix[10][10],int a,int b)
{
        adjacencyMatrix[a][b]=1;

}
main()

{   int adjacencyMatrix[10][10];
    int ed,no;
    cout<<"Number of edge";
    cin>>ed;
    cout<<"Number of Node";
    cin>>no;

  for(int i=0;i<no;i++){
            for(int j=0;j<no;j++){
                adjacencyMatrix[i][j]=5;
                }

  }
  int a,b;
    for(int i=0;i<ed;i++)
    {cout<<"add edge a and b";
        cin>>a>>b;
    add_edge(adjacencyMatrix,a,b);
    }
   for(int i=0;i<no;i++)
   {
       for(int j=0;j<no;j++)
       {
        cout<<adjacencyMatrix[i][j];
       }
        cout<<"\n";
   }

}
