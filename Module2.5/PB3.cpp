#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
int vis[1005];
int main()
{
    int n,e;cin>>n>>e;
    while(e--)
    {
        int a,b;cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int node;cin>>node;

        cout<<adj_list[node].size();
    return 0;
}