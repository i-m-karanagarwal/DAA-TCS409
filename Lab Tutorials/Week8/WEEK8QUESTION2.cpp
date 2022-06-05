#include <bits/stdc++.h>
using namespace std;

class Edge{
    public:
    int source;
    int dest;
    int weight;
};
void kruskals(Edge* input, int n, int e);
int find_Parent(int v, int parent[]);
int main(){
    int n,e,s,d,w;
    cout<<"Enter number of nodes and number of edges: ";
    cin>>n>>e;
    Edge* input = new Edge[e];

    cout<<"Enter edges src dest and weights: ";
    for(int i=0;i<e; i++){
        cin>>s>>d>>w;

        input[i].source=s;
        input[i].dest=d;
        input[i].weight=w;
    }

    kruskals(input,n,e);
}


bool Comparator(Edge e1, Edge e2){
    return e1.weight<e2.weight;
}
void kruskals(Edge* input, int n, int e){
    int parent[n];
    for(int i=0;i<n; i++)
        parent[i]=i;

    sort(input,input+e, Comparator);
    Edge* output = new Edge[n-1];

    int i=0,c=0;

    while(c<n-1){
        Edge curr = input[i];

        int srcParent = find_Parent(curr.source,parent);
        int destParent = find_Parent(curr.dest,parent);

        if(srcParent!=destParent){
            parent[curr.source]=curr.dest;
            output[c]=curr;
            c++;
        }
        i++;
    }
    int ans=0;
    for(int i=0; i<n-1; i++){
        cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
        ans+=output[i].weight;
    }

    cout<<ans;
}

int find_Parent(int v, int parent[]){
    if(v==parent[v])
        return v;

    return find_Parent(parent[v], parent);
}
