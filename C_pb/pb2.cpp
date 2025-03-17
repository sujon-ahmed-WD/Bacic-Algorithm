#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a + b - c == d || (a - b + c == d) || (a + b * c == d) || (a - b * c == d) || (a * b + c == d) || (a * b - c == d)))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}