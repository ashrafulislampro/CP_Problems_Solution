#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    vector<ll> pre(n + 1);
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + v[i];

    // for (auto val : pre)
    //     cout << val << " ";
    // cout << endl;

    ll mn = 0;
    map<int, int> freq;
    for (int r = 1; r <= n; r++)
    {
        ll jog = pre[r];
        ll biyog = mn;
        cout<<jog<<", "<<biyog<<" = "<<jog-x<<endl;
        if ((jog - x) == biyog)
            freq[biyog]++;
        mn = min(mn, pre[r]);
    }

    for (auto [key, val] : freq)
        cout << key << " " << val << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}