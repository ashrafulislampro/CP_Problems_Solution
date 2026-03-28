#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
int N;
int dp[100001], arr[100001];
int save[100001];
int goriberDp(int idx)
{
    if (idx == N)
        return 0;

    if (dp[idx] != -1)
        return dp[idx];

    int cost = INT_MAX;
    if (idx + 1 <= N)
    {
        int cost1 = abs(arr[idx] - arr[idx + 1]) + goriberDp(idx + 1);
        // cost = min(cost, cost1);
        if (cost1 < cost)
        {
            cost = cost1;
            save[idx] = 1;
        }
    }

    if (idx + 2 <= N)
    {
        int cost2 = abs(arr[idx] - arr[idx + 2]) + goriberDp(idx + 2);
        // cost = min(cost, cost2);
        if (cost2 < cost)
        {
            cost = cost2;
            save[idx] = 2;
        }
    }

    return dp[idx] = cost;
}
void solve()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << goriberDp(1) << endl;

    int idx = 1;
    while (idx <= N)
    {
        cout << idx << " ";
        if (idx == N)
        {
            break;
        }
        int jump = save[idx];
        idx += jump;
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37