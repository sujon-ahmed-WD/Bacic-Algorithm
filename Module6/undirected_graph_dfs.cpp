#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
bool vis[105];
int parnt[105];
bool cycle;
void dfs(int src)
{
    vis[src] = true;
    for (auto child : adj_list[src])

    {
        if (vis[child] && parnt[src] != child)
            cycle = true;
        {
            if (!vis[child])
            {

                parnt[child] = src;
                dfs(child);
            }
        }
        
        
    }
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
        adj_list[b].push_back(a);
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
    memset(parnt, -1, sizeof(parnt));
    if (cycle)
        cout << " cycle Detect";
    else
        cout << "Cycle not detect";

    return 0;
}