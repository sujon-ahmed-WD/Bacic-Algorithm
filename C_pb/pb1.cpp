#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0];
    int min_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            min_index = i;
        }
    }
    cout << min << " " << min_index+1;
 

    return 0;
}
