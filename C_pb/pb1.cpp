#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    cin >> a;
    int sum=0;
    for (int i = 0; i < a.size(); i++)
    {
        a[i]=a[i]-'0'; // akna i aschi code 49 and 0 holo 48 now a[i]=49-48; amra a
        sum+=a[i];
    }
    cout<<sum;
        return 0;
}
