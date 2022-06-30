#include<bits/stdc++.h>
using namespace std;

class Graph{
    private:
    int V;
    vector<vector<int>>adj;
    public:
    Graph(int v)
    {
        this->V=v;
        adj.resize(v,vector<int>(v,0));
    }
    void addEdge(int u, int v, int dist)
    {
        adj[u][v]=dist;
    }
    vector<int> dijkstra(int source)
    {
        vector<int>dist(V,INT_MAX);
        vector<bool>finalised(V,0);
        dist[source]=0;
        for(int i=0;i<V-1;i++)
        {
            int u=-1;
            for(int j=0;j<V-1;j++)
            {
                if(finalised[j]==false && (u==-1||dist[j]<dist[u]))
                {
                    u=j;
                }
            }
            finalised[u]=true;
            for(int j=0;j<V-1;j++)
            {
                if(adj[u][j]>0 && finalised[j]==false)
                {
                    dist[j]=min(dist[j], dist[u]+adj[u][j]);
                }
            }
        }
        return dist;
    }
};

int main()
{
    Graph g(9);
    
}