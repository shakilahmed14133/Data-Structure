#include<bits/stdc++.h>
#include<vector>
using namespace std;
void addEdge(vector<int> adj[],int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (int i=0;i<adj[v].size();i++)
            cout << "-> " << adj[v][i];
        printf("\n");
    }
}
int main()

{
    int V=5;
    vector <int> adj[V];
    //cout<<sizeof(adj)<<endl;
    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    printGraph(adj,V);

}
