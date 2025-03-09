#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];
int dp[1005][1005];
int knapsack(int i, int mx_weight)
{

    if (i < 0 || mx_weight <= 0)
        return 0;

    if(dp[i][mx_weight]!=-1)
        return dp[i][mx_weight];   
    // 2 options
    // 1. bag a rakhbo, 2. bag a rakhbo na
    if (weight[i] <= mx_weight)
    {
        int op1 = knapsack(i - 1, mx_weight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mx_weight);
        dp[i][mx_weight]=max(op1, op2);
        return dp[i][mx_weight];
    }
    else
    {
        // 1 option
        // bag a rakhte parbo na
        dp[i][mx_weight]=knapsack(i - 1, mx_weight);
        return  dp[i][mx_weight];
    }
}

int main()
{

    int n, mx_weight;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> val[i];
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    return 0;
}