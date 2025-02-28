#include <bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];

int find(int node)
{
   cout << node << endl;
   if (par[node] == -1)
      return node;

   int leadear = find(par[node]);
   par[node] = leadear;

   return leadear;

   return node;
}

// void dsu_union(int node1, int node2)
// {
//    int leader1 = find(node1);
//    int leader2 = find(node2);
//    if (group_size[leader1] >= group_size[leader2])
//    {
//       par[leader2] = leader1;
//       group_size[leader1] += group_size[leader2];
//    }
//    else
//    {
//       par[leader1] = leader2;
//       group_size[leader1] += group_size[leader2];
//    }
// }
void dsu_union(int node1,int node2)
{
   int leader1=find(node1);
   int leader2=find(node2);

   if(group_size[leader1]>=group_size[leader2])
   {
      par[leader2]=leader1;
      group_size[leader1]+=group_size[leader2]; 

   }
   else
   {
      par[leader1]=leader2;
      group_size[leader1]+=group_size[leader2];
   }
}
int main()
{
   memset(par, -1, sizeof(par));
   memset(group_size,1,sizeof(group_size));

   par[0] = 1;
   par[1] = -1;
   par[2] = 1;
   par[3] = 1;
   par[4] = 5;
   par[5] = 3;
   cout << find(4) << endl;

   for (int i = 0; i < 6; i++)
   {
      cout << i << " -> " << par[i] << endl;
   }
   return 0;
}
