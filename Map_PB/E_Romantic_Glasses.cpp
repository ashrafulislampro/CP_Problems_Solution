#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    map<ll, ll> mp;
    mp[0] = 1;
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        v[i] *= ((i % 2) ? -1 : 1);

        s += v[i];

        if (mp[s])
        {
            cout << "YES" << endl;
            return;
        }
        ++mp[s];
    }
    cout << "NO" << endl;
}
int main()
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