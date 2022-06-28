#include<bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    vector<vector<int>>adj;
    public:
    Graph(int v)
    {
        this->v=v;
        adj.resize(v,vector<int>(v,0));
    }
    void addEdge(int u, int v)
    {
        adj[u][v]=1;
    }
    bool DFS(int source, int parent, vector<bool>&visited)
    {
        visited[source]=true;

        for(int i=0;i<v;i++)
        {
            if(adj[source][i]==1)
            {
                if(visited[i]==false)
                {
                    visited[i]=true;
                    if(DFS(i,source,visited))
                    {
                        return true;
                    }
                }
                else
                {
                    if(i!=parent)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool hasLoop()
    {
        vector<bool>visited(v,false);
        for(int i=0;i<v;i++)
        {
            if(visited[i]==false)
            {
                visited[i]==true;
                if(DFS(i,-1,visited))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Graph g(4);
    g.addEdge(1,2);
    g.addEdge(2,3);
    cout<<g.hasLoop();
    return 0;
}