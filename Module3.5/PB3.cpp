#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[105];
int cnt = 0;


bool vis[105];
void dfs(int src)
{
    // cout << src << " ";
    cnt++;
    vis[src] = true;
    for (auto child : adj_list[src])
    {
        if (!vis[child])
            dfs(child);
            
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
    vector<int>ac;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            cnt=0;
            dfs(i);
            ac.push_back(cnt);
        }
    }
    sort(ac.begin(),ac.end(),greater<int>());
    for(auto val:ac)
    {
        cout<<val<<" ";
    }
     

    return 0;
}