#include<bits/stdc++.h>
using namespace std;

int V=6;
vector<int>visited(V,0);
void addEdge(vector<int>adj[], int s, int d){
    adj[s].push_back(d);
    adj[d].push_back(s);
}

void printGraph(vector<int>adj[], int V){

    for(int i=0; i<V; i++){
        cout<<"\n"<<"Vertex: "<<i;
        for(auto a:adj[i]){
            cout<<"->"<<a;
        }
    }
}

void DFS(vector<int>adj[], vector<int>& visited, int s, int d){
    list <int> stack1;
    visited[s] = 1;
    stack1.push_back(s);
    for(auto a:adj[s]){
        if(!visited[a]){
            DFS(adj,visited,a,d);
        }
    }

    
    for(auto b:stack1){
        cout<<b<<" ";
    }
}

int main(){
    vector<int>adj[V];
    

    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    addEdge(adj,2,5);
    addEdge(adj,3,4);

    printGraph(adj,V);
    cout<<endl;
    DFS(adj,visited,0,5);
}