#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;cin>>n>>e;
    vector<pair<int,int>>edg_list;
    while(e--)
    {
        int a,b;cin>>a>>b;
        edg_list.push_back({a,b});

    }

    for(pair<int,int> p:edg_list)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}