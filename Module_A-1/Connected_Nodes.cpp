#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1000006];
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
        vector<int> coun;

        int node;
        cin >> node;
        for (auto child : adj_list[node])
        {
            coun.push_back(child);
        }
        sort(coun.begin(), coun.end(), greater<int>());
        int len=coun.size();
        if(len>0)
        {
            for(auto val:coun)
            {
                cout<<val<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }

          
          
         
    }

    return 0;
}