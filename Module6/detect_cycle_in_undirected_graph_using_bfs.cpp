#include<bits/stdc++.h>
using namespace std;
bool vis[105];
bool cycle;
int parent[105];
vector<int>adj_list[105];


void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        int par=q.front();
        q.pop();
        for(auto child:adj_list[par])
        {
            if(vis[child] && parent[par]!=child) // ater mana holo ha praint and prant !=child nh hoy tah hola 
            {
                cycle=true;
            } 
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
                parent[child]=par;
            }
        }
 
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    cycle=false;

    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            bfs(i);
        }
    }
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    if(cycle)
        cout<<"Cycle Detect";
    else
    cout<<"Cycle not detected";  

    return 0;
}