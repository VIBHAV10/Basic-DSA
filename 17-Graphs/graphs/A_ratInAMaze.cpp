#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<vector<int>> adj;
    public:
    Graph(int v)
    {
        this->V=v;
        adj.resize(v,vector<int>(v,0));
    }
    void addEdge(int u, int v)
    {
        adj[u][v]=1;
        adj[v][u]=1;
    }
    void Path(char lastmove, )
    {

    }
    vector<string> findPath(vector<vector<int>> &m, int n) {        
        vector<string>solution;
        return solution;
    }
};