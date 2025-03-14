#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n + 5];

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // my think is a for loop modda loop use hova oita but
    // loop ar modda break; asov kaj korala bar kora daa;
    long long tar;
    cin >> tar;
    bool found = false;
    for (long long i = 0; i < n; i++)
    {
        if (a[i] == tar)
        {
            cout << i;
            found = true;
            break;
        }
    }
    if (found == false)
        cout << "-1";

    return 0;
}