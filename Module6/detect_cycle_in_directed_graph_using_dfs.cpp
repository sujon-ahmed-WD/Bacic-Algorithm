#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool vis[105];
bool pathvis[105];
bool cycle;
void dfs(int src)
{
    vis[src] = true;
    pathvis[src]=true;
    for (auto child : adj_list[src])

    {
        if (vis[child] && pathvis[child])
            cycle = true;
        {
            if (!vis[child])
            {

                dfs(child);
            }
        }
        
        
    }
    // return ;
    pathvis[src]=false;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    memset(vis, false, sizeof(vis));
    memset(pathvis, -1, sizeof(pathvis));
    if (cycle)
        cout << " cycle Detect";
    else
        cout << "Cycle not detect";
    cout<<"end of Bangladash..";
    return 0;
}