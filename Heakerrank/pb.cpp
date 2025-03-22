#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a; cin>>a;
    int b; cin>>b;
    int sum=a+b;
    int min=abs(a-b);
    cout<<sum<<endl;
    cout<<min;
    return 0;
}