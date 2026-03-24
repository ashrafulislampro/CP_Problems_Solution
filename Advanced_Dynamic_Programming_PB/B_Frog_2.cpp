#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vector<int> arr;
vector<int> dp(100001, -1);
int n, k;
int rec_dp(int idx)
{
    if (idx == n)
        return 0;

    if (dp[idx] != -1)
        return dp[idx];

    int cost = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        if (idx + i > n)
            break;
        int cost1 = abs(arr[idx] - arr[idx + i]) + rec_dp(idx + i);
        cost = min(cost, cost1);
    }
    return dp[idx] = cost;
}
void solve()
{

    cin >> n >> k;
    arr.resize(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    cout << rec_dp(1) << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37