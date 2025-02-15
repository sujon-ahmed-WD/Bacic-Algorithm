#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int N, M;
vector<pair<int, int>> par = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool isValid(int sr, int sc)
{
    if (sr < 0 || sr >= N || sc < 0 || sc >= M)
    {
        return false;
    }
    return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + par[i].first;
        int cj = sj + par[i].second;
        if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
};
int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                dfs(i, j);

                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}