#include <iostream>
using namespace std;

class List{
    int list[100];
    int size = 0;

public:
    void add(int a){
        list[size] = a;
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
    }

    bool isEdge(int a, int b){
        if(adjacencyMatrix[a][b] == 1) return 1;
        else return 0;
    }

    int inDegree(int a){
        //complete
    }

    int outDegree(int a){
        //complete
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



int main(){

    //input number of nodes and number of Edges
    //create a directed graph
    //for every edge: 
    //      input two number a and b
    //      add edge (a,b) to edge
    //input another number x
    //print the degree of x
    // print all the adjacent nodes of x

    return 0;
}

    
