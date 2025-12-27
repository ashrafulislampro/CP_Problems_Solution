#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    ll cost = 0;
    while (pq.size() >= 2)
    {
        ll sm1 = pq.top();
        pq.pop();
        ll sm2 = pq.top();
        pq.pop();
        // cerr << "Taking [" << sm1 << ", " << sm2 << "]" << endl;
        ll sum = (sm1 + sm2);
        cost += sum;
        pq.push(sum);
    }
    cout << cost << endl;
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