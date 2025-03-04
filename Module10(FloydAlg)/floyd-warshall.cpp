#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj_mat[i][j] = INT_MAX;
    for (int i = 0; i < n; i++)
        adj_mat[i][i] = 0;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_mat[a][b] = c;
        // adj_mat[b][a]c;  undiracted;
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj_mat[i][k] != INT_MAX && adj_mat[k][j] != INT_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
            }
        }
    }
    bool cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (adj_mat[i][i] < 0)
            cycle = true;
    }

    if (cycle)
        cout << "Cycle is detect";
    else
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj_mat[i][j] == INT_MAX)
                    cout << "INF" << " ";
                else
                    cout << adj_mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}