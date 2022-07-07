#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<list<int>> adj;
    public:
    Graph(int V)
    {
        this->V=V;
        adj.resize(V);
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }

    
    void DFS(int u, stack<int>&s,vector<bool>&visited)
    {
        visited[u]=true;
        for(list<int>::iterator i=adj[u].begin();i!=adj[u].end();i++)
        {
            if(visited[*i]==false)
            {
                DFS(*i,s,visited);
            }
        }
        s.push(u);
    }
    vector<int> DFStopologicalSort()
    {
        stack<int>s;
        vector<int> solution;
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++)
        {
            if(visited[i]==false)
            {
                DFS(i,s,visited);
            }
        }

        while(s.empty()==false)
        {
            int ans=s.top();
            solution.push_back(ans);
            s.pop();
        }
        return solution;
    }
};

int main()
{
    // Graph g(6);
    // g.addEdge(0,1);
    // g.addEdge(0,2);
    // g.addEdge(1,3);
    // g.addEdge(2,3);
    // g.addEdge(3,4);
    // g.addEdge(3,5);
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,1);
    vector<int>topoSort=g.DFStopologicalSort();
    for(int i=0;i<topoSort.size();i++)
    {
        cout<<topoSort[i]<<" ";
    }
    

    return 0;
}