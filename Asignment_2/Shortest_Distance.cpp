#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;

    cin >> n >> e;
    long long adj_mat[n + 5][n + 5];

    for (int i = 1; i <= n; i++)

    {
        for (int j = 1; j <= n; j++)
        {
            adj_mat[i][j] = LLONG_MAX;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        adj_mat[i][i] = 0;
    }
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b], c);
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj_mat[i][k] != LLONG_MAX && adj_mat[k][j] != LLONG_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int s, d;
        cin >> s >> d;
        cout << (adj_mat[s][d] == LLONG_MAX ? -1 : adj_mat[s][d]) << endl;
    }
}