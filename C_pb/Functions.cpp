#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    int d;
    cin >> d;
    if (b < a || c < a || d < a)
        cout << a;
    else if (a < b || c < b || d < b)
        cout << b;
    else if (a < c || b < c || d < c)
        cout << c;
    else
        cout << d;

    return 0;
}