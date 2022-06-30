#include<bits/stdc++.h>
using namespace std;

class Graph{
    private:
    int V;
    vector<forward_list<int>> adj;
    
    public:
    Graph(int v)
    {
        this->V=v;
        adj.resize(V,forward_list<int>());
    }
    void addEdge(int u, int v)
    {
        adj[u].push_front(v);
    }
};