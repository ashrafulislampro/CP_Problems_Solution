#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<ll> D(2 * n);
    for (int i = 0; i < n; i++)
    {
        cin >> D[i];
        D[i] %= a + b;
        D[n + i] = D[i] + a + b;
    }
    sort(D.begin(), D.end());
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        ll c = lower_bound(D.begin(), D.end(), D[i] + a) - D.begin();
        ans |= c == n + i;
    }
    cout << (ans ? "Yes" : "No") << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}