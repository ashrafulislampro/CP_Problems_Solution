#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define pll pair<ll, ll>

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// n = 1000
// element range = 1 <= x <= 10^9
// n = 10^5
// element range = 1 <= x <= 10^5
// at max 100 ta unique value thakbe...
// jdi n ar value kom thake kinto element range beshi thake tahale index nia kaj krbo.
int dp[1005][1005];
int next_state[1005][1005];
int arr[1005];
int n;

int LIS(int i, int j)
{
    if (i > n)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = dp[i][j];

    int ans1 = LIS(i + 1, j);
    int ans2 = -mod;

    if (arr[i] > arr[j])
    {
        ans2 = max(ans2, 1 + LIS(i + 1, i));
    }

    if (ans1 >= ans2)
    {
        next_state[i][j] = j;
    }
    else
    {
        next_state[i][j] = i;
    }
    ans = max(ans1, ans2);
    return dp[i][j] = ans;
}
void path_print(int i, int j)
{
    if (i > n)
        return;

    if (next_state[i][j] == i)
    {
        cout << arr[i] << " ";
    }
    auto it = next_state[i][j];
    path_print(i+1, it);
}
// n = 10^5
// element range = 1 -> 100
// jdi n ar value beshi thake kinto element range kom thake tahale previous value nia kaj krbo...
int LIS_pre(int i, int pre)
{
    if (i > n)
    {
        return 0;
    }
    if (dp[i][pre] != -1)
    {
        return dp[i][pre];
    }
    int &ans = dp[i][pre];

    ans = LIS(i + 1, pre);

    if (arr[i] > pre)
    {
        ans = max(ans, 1 + LIS(i + 1, arr[i]));
    }

    return ans;
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    arr[0] = -mod;
    cout << LIS(1, 0) << "\n";
    path_print(1, 0);
}
int main()
{
    ASHRAFUL
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37