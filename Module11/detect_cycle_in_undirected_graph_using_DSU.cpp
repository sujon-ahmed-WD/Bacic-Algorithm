#include <bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];

int find(int node)
{
    // cout << node << endl;
    if (par[node] == -1)
        return node;

    int leadear = find(par[node]);
    par[node] = leadear;
    return leadear;
     
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader1] += group_size[leader2];
    }
}
int main()
{
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));
    int n, e;
    cin >> n >> e;
    bool cycle=false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA=find(a);
        int leaderB=find(b);
        if(leaderA==leaderB)
            cycle=true;
        else
        {
            dsu_union(a,b);
        }    

    }
    if(cycle)
        cout<<"Cycle detect.\n";
    else
        cout<<"Cycle not detect\n";    

    return 0;
}