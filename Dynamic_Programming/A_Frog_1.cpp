#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
// Using recursion 
vector<ll> preCal(100001, -1);
ll minCost(ll i, ll n, ll v[])
{
    if (i == n)
        return 0;
    if (i == n - 1)
        return (abs(v[i] - v[i + 1]) + minCost(i + 1, n, v));
    if (preCal[i] != -1)
        return preCal[i];
    preCal[i] = min((abs(v[i] - v[i + 1]) + minCost(i + 1, n, v)), (abs(v[i + 2] - v[i]) + minCost(i + 2, n, v)));

    return preCal[i];
}


void solve()
{
    int n;
    cin >> n;
    // vector<int> v(n + 1);
    int v[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    };

    cout << minCost(1, n, v) << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}