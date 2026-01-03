#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int n;
    cin >> n;
    // vector<ll> v(n);
    priority_queue<ll> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    while (pq.size() >= 2)
    {
        int f_mx = pq.top();
        pq.pop();
        int s_mx = pq.top();
        pq.pop();
        // cout << f_mx << " " << s_mx << endl;
        pq.push(f_mx * s_mx);
        pq.push(1);
        if (s_mx == 1)
            break;
    }
    ll sum = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
    }
    cout << (sum * 2022) << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}