#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1000006];
 

int main()
{
    int v, e;
    cin >> v >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }
    int q, node1, node2;
    cin >> q;
    while (q--)
    {
        cin >> node1 >> node2;
        int len = adj_list[node1].size();
        if (node1 == node2)
        {
            cout << "YES" << endl;
        }
        else if (len > 0)
        {
            bool Connecton = true;
            for (int i = 0; i < len; i++)
            {

                if (adj_list[node1][i] == node2)
                {
                    cout << "YES" << endl;
                    Connecton = false;
                    
                }
            }
            if (Connecton)
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}