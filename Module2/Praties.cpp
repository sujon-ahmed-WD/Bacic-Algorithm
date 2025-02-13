#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int parant[1005];
void bfs(int src)
{
   queue<int> q;
   q.push(src);
   vis[src] = true;
   level[src] = 0;

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
            parant[child] = pre;
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
   memset(vis, false, sizeof(vis));
   memset(level, -1, sizeof(level));
   memset(parant, -1, sizeof(parant));
   int src, des;
   cin >> src >> des;

   bfs(src);
   // for(int i=0; i<n; i++)
   // {
   //    cout<< i<<" -> "<<parant[i]<<endl;
   // }
   vector<int> val;
   int node = des;
   while (node != -1)
   {
      val.push_back(node);
      node = parant[node];


   }
   if(parant)
 
   reverse(val.begin(), val.end());
   int cnt = val.size();
   cout << cnt << endl;
   for (auto x : val)
   {
      cout << x << " ";
   }

   return 0;
}