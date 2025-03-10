#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int prant[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    prant[src] = -1;

    while (!q.empty())
    {
        int pre = q.front();
        q.pop();

        for (auto child : adj_list[pre])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[pre] + 1;
                prant[child] = pre;
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

    int q;
    cin >> q;
    while (q--)
    {
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        memset(prant, -1, sizeof(prant));

        int src, des;
        cin >> src >> des;
        bfs(src);

        if (level[des] == -1)
            cout << "-1" << endl;
        else
        {
            vector<int> path;
            int node = des;
            while (node != -1)
            {
                path.push_back(node);
                node = prant[node];
            }
            // reverse(path.begin(), path.end());
            cout << path.size() - 1 << endl;
        }
    }
    return 0;
}
