#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<long long> val;
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        val.insert(x);
    }
    long long sum = 0;
    for (auto c : val)
    {
        sum += c;
    }
    cout << sum;
    // int sum=0;
    // int n; cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //      int x; cin>>x;
    //      sum+=x;
    // }
    // cout<<sum;
    return 0;
}