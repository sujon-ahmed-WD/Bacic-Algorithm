#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    level[src] = 0;

    while (!q.empty())
    {
        int pre = q.front();
        q.pop();

        for (int child : adj_list[pre])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[pre] + 1;
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
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(0);
    int L;
    cin >> L;
    vector<int> val;
    for (int i = 0; i < n; i++)
    {
        if (level[i] == L)
        {
            val.push_back(i);
        }
    }
    for (auto x : val)
    {
        cout << x << " ";
    }

    return 0;
}