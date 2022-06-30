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
        adj[v][u]=1;
    }
    vector<int> shortestDistance(int source)
    {
        vector<int> distance(v,0);
        vector<bool>visited(v,false);
        queue<int>q;
        q.push(source);
        visited[source]=true;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            for(int i=0;i<adj[u].size();i++)
            {
                if(adj[u][i]==1 && visited[i]==false)
                {
                    visited[i]=true;
                    distance[i]=distance[u]+1;
                    q.push(i);
                }
            }
        }
        return distance;

    }
};

int main()
{
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,4);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(4,5);
    vector<int>dist=g.shortestDistance(0);
    for(int i:dist)
    {
        cout<<i<<" ";
    }
    return 0;
}