#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
int vis[1005];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        int pre=q.front();
        q.pop();
        

        for(auto child:adj_list[pre])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
            }
        }
    }
}
int main()
{
    int n,e;cin>>n>>e;
    while(e--)
    {
        int a,b;cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int node;cin>>node;
    // memset(vis,false,sizeof(vis));
    // bfs(0);
        cout<<adj_list[node].size();
    return 0;
}