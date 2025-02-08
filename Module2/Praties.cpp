 #include<bits/stdc++.h>
 using namespace std;
 vector<int>adj_list[1005];
 bool vis[1005];
 void bfs(int src)
 {
   queue<int>q;
   q.push(src);
   vis[src]=true;

   while(!q.empty())
   {
      int pre=q.front();
      q.pop();
      cout<<pre<<" ";
      for(int child:adj_list[pre])
      {
         if(!vis[child])
         {
            q.push(child);
            vis[child]=true;
         }
      }
      
   }
 }
 int main()
 {
     int n,e;cin>>n>>e;
     while(e--)
     {
      int a,b;cin>>a>>b;
      adj_list[a].push_back(b);
      adj_list[b].push_back(a);
     }
     bfs(0);


     return 0;
 }