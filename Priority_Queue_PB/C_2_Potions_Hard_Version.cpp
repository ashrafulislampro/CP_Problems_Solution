#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    ll ans = 0, sum = 0;
    for (auto el : v)
    {
        sum += el;
        ans++;
        if (el < 0)
            pq.push(el);
        if (sum < 0)
        {
            sum += abs(pq.top());
            pq.pop();
            ans--;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}