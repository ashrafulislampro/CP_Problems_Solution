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
template <typename T>
using vec = vector<T>;

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    string s, t;
    cin >> s >> t;

    int cnt = 0, len = t.sz(), len2 = s.sz();
    for (int i = 0; i < len; i++)
    {
        if (t[i] == 'a')
            cnt++;
    }
    if (t == "a")
    {
        cout << 1 << "\n";
    }
    else if (cnt >= 1)
    {
        cout << -1 << "\n";
    }
    else
    {
        ll ans = 2;
        for (int i = 2; i <= len2; i++)
            ans *= 2;
        cout << ans << "\n";
    }
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37