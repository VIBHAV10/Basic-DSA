#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    vector<vector<int>>adj;
    public:
    Graph(int v)
    {
        this->v=v;
        adj.resize(v,vector<int>(v));
    }
    void addEdge(int u, int v)
    {
        adj[u][v]=1;
        // adj[v][u]=1;
    }
    vector<int> iterativeBFS(int source)
    {
        vector<bool> visited(v, false);
        queue<int>q;
        vector<int>solution;
        q.push(source);
        visited[source]=true;
        while(q.empty()==false)
        {
            int u=q.front();
            q.pop();
            solution.push_back(u);
            for(int i=0;i<adj[u].size();i++)
            {
                if(adj[u][i]==1 && visited[i]==false)
                {
                    q.push(i);
                    visited[i]=true;
                }
            }
        }
        return solution;
    }

    vector<int> DFS(int source)
    {
        vector<int>visited(v,false);
        vector<int>solution;
        stack<int>s;
        visited[source]=true;
        s.push(source);
        while(!s.empty())
        {
            int u=s.top();
            s.pop();
            solution.push_back(u);
            for(int i=0;i<adj[u].size();i++)
            {
                if(adj[u][i]==1 && visited[i]==false)
                {
                    s.push(i);
                    visited[i]=true;
                }
            }
        }
        return solution;
    }

    void recursiveDFS(int source, vector<bool> & visited, vector<int> & solution)
    {
        solution.push_back(source);
        for(int i=0;i<adj[source].size();i++)
        {
            if(adj[source][i]==1 && visited[i]==false)
            {
                visited[i]=true;
                recursiveDFS(i,visited,solution);
            }
        }
        
    }

    vector<int> recDFS(int source)
    {
        vector<int> solution;
        vector<bool> visited(v,false);
        visited[source]=true;
        recursiveDFS(0,visited,solution);
        return solution;
    }
};


int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);
    vector<int> BFS=g.iterativeBFS(2);
    for(int i: BFS)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>DFS=g.DFS(0);
    for(int i: DFS)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>recursiveDFSsolution=g.recDFS(0);
    for(int i:recursiveDFSsolution)
    {
        cout<<i<<" ";
    }
    return 0;
}