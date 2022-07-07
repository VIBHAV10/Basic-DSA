#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<list<int>> adjL;
    public:
    Graph(int V)
    {
        this->V=V;
        adjL.resize(V);
    }

    void addEdge(int u, int v)
    {
        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }
};