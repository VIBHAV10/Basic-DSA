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
    int countDisconnectedusingBFS()
    {
        vector<bool>visited(v,false);
        int count=0;
        for(int i=0;i<v;i++)
        {
            if(visited[i]==false)
            {
                visited[i]=true;
                count++;
                BFS(i,visited);
            }
        }
        return count;
    }
    void BFS(int source, vector<bool>&visited)
    {
        queue<int>q;
        q.push(source);
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            cout<<u<<" ";
            for(int i=0;i<adj[u].size();i++)
            {
                if(adj[u][i]==1 && visited[i]==false)
                {
                    visited[i]=true;
                    q.push(i);
                }
            }
        }

    }
};

int main()
{
    Graph g(9);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(3,4);
    g.addEdge(5,6);
    g.addEdge(5,7);
    g.addEdge(7,8);
    int ans=g.countDisconnectedusingBFS();
    cout<<endl;
    cout<<ans;
}