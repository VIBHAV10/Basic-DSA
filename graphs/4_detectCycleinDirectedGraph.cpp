#include<bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    vector<list<int>>adj;
    public:
    Graph(int v)
    {
        this->v=v;
        adj.resize(v);
    }
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }
    bool DFS(int source,vector<bool>visited,vector<bool> recStack)
    {
        for(auto i: adj[source])
        {
            if(recStack[i])
            {
                return true;
            }
            else
            {
                recStack[i]=true;
                visited[i]=true;
                DFS(i,visited,recStack);
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
                vector<bool> recStack(v,false);
                if(DFS(i,visited,recStack))
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
    Graph g(3);
    g.addEdge(0,1);
    g.addEdge(2,1);
    cout<<g.hasLoop();
    return 0;
}