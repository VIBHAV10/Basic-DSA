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
    void addEdge(int u, int v, int cost)
    {
        adj[u][v]=cost;
        adj[v][u]=cost;
    }
    int minimumSpanningTreeCost()
    {
        vector<int>key(V, INT_MAX);
        vector<bool>mset(V, false);
        key[0]=0;
        int ans=0;
        //mset[0]=1;
        for(int i=0;i<V;i++)
        {
            int u=-1;
            for(int j=0;j<V;j++)
            {
                if(mset[j]==false && (u==-1||key[j]<key[u]))
                {
                    u=j;
                }
            }
            mset[u]=true;
            ans=ans+key[u];
            //cout<<u<<" "<<key[u]<<" "<<ans<<endl;
            for(int j=0;j<V;j++)
            {
                if(adj[u][j])
                {
                    key[j]=min(key[j],adj[u][j]);
                }
            }   
        }
        return ans;
    }
};
int main()
{
    Graph g(5);
    g.addEdge(0,1,2);
    g.addEdge(0,3,6);
    g.addEdge(1,3,8);
    g.addEdge(1,4,5);
    g.addEdge(1,2,3);
    g.addEdge(2,4,7);
    cout<<g.minimumSpanningTreeCost();
    return 0;
}