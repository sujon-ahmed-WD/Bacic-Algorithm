#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[105];
bool vis[105];
int cnt;
void dfs(int node)
{
    // cout<<node<<" ";
    cnt++;
    vis[node]=true;

    for(auto child: adj_list[node])
    {
        if(!vis[child])
        {
            dfs(child);
            vis[child]=true;
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
    memset(vis,false,sizeof(vis));
    dfs(node);
cout<<cnt;
    return 0;
}
