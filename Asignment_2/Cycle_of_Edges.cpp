// #include <bits/stdc++.h>
// using namespace std;
// int par[10005];
// int group_size[10005];

// int find(int node)
// {
//     if (par[node] == -1)
//         return node;

//     int leadear = find(par[node]);
//     par[node] = leadear;
//     return leadear;
// }

// void dsu_union(int node1, int node2)
// {
//     int leader1 = find(node1);
//     int leader2 = find(node2);

//     if (group_size[leader1] >= group_size[leader2])
//     {
//         par[leader2] = leader1;
//         group_size[leader1] += group_size[leader2];
//     }
//     else
//     {
//         par[leader1] = leader2;
//         group_size[leader2] += group_size[leader1];
//     }
// }
// int main()
// {
//     memset(par, -1, sizeof(par));
//     memset(group_size, 1, sizeof(group_size));
//     int n, e;
//     cin >> n >> e;
//     int cnt = 0;

//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         int leaderA = find(a);
//         int leaderB = find(b);
//         if (leaderA == leaderB)
//             cnt++;
//         else
//         {
//             dsu_union(a, b);
//         }
//     }
//     cout << cnt;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100005];
int prant[100005];
bool vis[100005];
int cycle_cnt;

void dfs(int src)
{
    vis[src] = true;
    for (auto child : adj_list[src])
    {
        if (vis[child] && prant[src] != child)
        {
            cycle_cnt++;
        }
        if (!vis[child])
        {
            prant[child] = src;
            dfs(child);
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
    memset(prant, -1, sizeof(prant));
    cycle_cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    cout<<cycle_cnt/2<<endl;
    return 0;
}
