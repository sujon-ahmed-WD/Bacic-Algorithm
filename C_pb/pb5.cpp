#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int fast_dig = n % 10;
    int last_dig = n / 10;
    if (last_dig == 0)
        cout << "YES";
    else if (fast_dig % last_dig == 0 || last_dig % fast_dig == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}