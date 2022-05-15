#include<iostream>
using namespace std;

class List{
    int list[100];
    int size = 0;

public:
    void add(int a){
        list[size] =a;
        size++;
    }

    int get(int i){
        return list[i];
    }
};

class Graph{
    bool isDirected;
    int noNodes;
    int adjacencyMatrix[100][100];
    int noEdges = 0;

public:

    Graph(bool isDirected, int noNodes){
        this->isDirected = isDirected;
        this->noNodes = noNodes;

        for(int i=0;i<noNodes;i++)
            for(int j=0;j<noNodes;j++)
                adjacencyMatrix[i][j]=0;
    }

    void addEdge(int a, int b){
        adjacencyMatrix[a][b] = 1;
        if (!isDirected) adjacencyMatrix[b][a] = 1;
        noEdges++;
    }

    void removeEdge(int a, int b){
        //complete
		if((adjacencyMatrix[a][b] = 1) || (adjacencyMatrix[b][a] = 1) ){
		 adjacencyMatrix[a][b] = 0;
		 adjacencyMatrix[b][a] = 0;
		 noEdges--;
		}
    }

    bool isEdge(int a, int b){
        if(adjacencyMatrix[a][b] == 1) return 1;
        else return 0;
    }

    int inDegree(int a){
        //complete
	int ind=0;
		 for(int i=0; i<noNodes; i++){
            if(adjacencyMatrix[i][a] == 1){
                ind++;

            }
    }
    return ind;
    }

    int outDegree(int a){
        //complete
		int outd=0;
		 for(int i=0; i<noNodes; i++){
            if(adjacencyMatrix[a][i] == 1){
                outd++;

            }
    }
    return outd;
    }

    List adjacencyNodes(int a){
        List adj;
        int ind = 0;

        for(int i=0; i<noNodes; i++){
            if(adjacencyMatrix[a][i] == 1){
                adj.add(i);
                ind++;
            }
        }
        return adj;
    }

};



 main(){

    //input number of nodes and number of Edges
	int noNodes,noEdges,a,b,x,in,out,totaldegree;

    cout<<"noEdges";
	cin>>noEdges;
	cout<<"noNodes";
	cin>>noNodes;



    //create a directed graph
    Graph g(1,noNodes);
    //for every edge:
    //      input two number a and b
    for(int i=0;i<=noEdges;i++)
    {   cout<<"input a and b"<<endl;
        cin>>a>>b;
        g.addEdge(a,b);
    }
    //      add edge (a,b) to edge
    //input another number x

     cout<<"input another number x"<<endl;
     cin>>x;
    //print the degree of x

     //in=g.inDegree(x);
     //out=g.outDegree(x);
     totaldegree=g.inDegree(x)+g.outDegree(x);
     cout<<"degree of node "<<x<<"-> "<<totaldegree<<endl;
    // print all the adjacent nodes of x





}
