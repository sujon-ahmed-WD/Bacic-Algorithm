#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push(10);
    pq.push(5);
    cout<<pq.top()<<endl;
    return 0;
}