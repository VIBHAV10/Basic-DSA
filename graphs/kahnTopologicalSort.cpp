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

    vector<int> calculateIndegree()
    {
        vector<int>indegree(V,0);
        for(int i=0;i<V;i++)
        {
            for(auto j:adj[i])
            {
                indegree[j]++;
            }
        }
        return indegree;
    }

    vector<int> topologicalSort(vector<int> indegree)
    {
        queue<int>q;
        vector<int> solution;
        for(int i=0;i<indegree.size();i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        while(q.empty()==false)
        {
            int u=q.front();
            q.pop();
            solution.push_back(u);
            for(auto i:adj[u])
            {
                indegree[i]--;
                if(indegree[i]==0)
                {
                    q.push(i);
                }
            }
            // for(int i=0;i<indegree.size();i++)
            // {
            //     if(indegree[i]==0)
            //     {
            //         q.push(i);
            //     }
            // }

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
    vector<int>indegree=g.calculateIndegree();
    vector<int>topoSort=g.topologicalSort(indegree);
    if(topoSort.size()==indegree.size())
    {
        for(int i=0;i<topoSort.size();i++)
        {
            cout<<topoSort[i]<<" ";
        }
    }
    else
    {
        cout<<"graph contains a loop";
    }
    return 0;
}