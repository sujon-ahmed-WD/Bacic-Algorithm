#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
long long dis[1000];
int n, e;
vector<Edge> edj_list;

void bellman_ford(int s)
{

    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
    }
    dis[s] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edj_list)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }
    // negitive 

    for (auto ed : edj_list)
    {
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;
        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
        {
            cout << "Negative Cycle Detected";
             exit(0);
        }
    }
}
int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edj_list.push_back(Edge(a, b, c));
    }
    int s;
    cin >> s;
    bellman_ford(s);

    int q;
    cin >> q;
    while (q--)
    {
        int dst;
        cin >> dst;

         if(dis[dst]==LLONG_MAX)
         {
            cout<<"Not Possible\n";
         }
         else
        cout << dis[dst] << endl;
    }

    return 0;
}