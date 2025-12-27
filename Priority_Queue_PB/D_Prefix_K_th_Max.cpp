#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (auto &x : v)
        cin >> x;
    for (int i = 0; i < k; i++)
    {
        pq.push(v[i]);
    }
    cout << pq.top() << endl;
    for (int i = k; i < n; i++)
    {
        pq.push(v[i]); // k + 1 elements
        pq.pop();      // k-th elements
        cout << pq.top() << endl;
    }
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