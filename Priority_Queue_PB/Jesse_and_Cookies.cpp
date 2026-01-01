#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    ll ans = 0;
    while (pq.size() >= 2)
    {
        int sm_1 = pq.top();
        pq.pop();
        int sm_2 = pq.top();
        pq.pop();

        if (sm_1 < k || sm_2 < k)
        {
            ans++;
            pq.push(sm_1 + sm_2 * 2);
        }
        else
            break;
    }

    if (pq.size() == 1 && pq.top() < k)
    {
        cout << -1 << endl;
    }
    else
        cout << ans << endl;
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