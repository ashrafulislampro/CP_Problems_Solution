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
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> c;
    vector<ll> arr(n);
    for (auto &it : arr)
        cin >> it;

    sort(arr.begin(), arr.end());

    ll cle = 0, cg = 0;
    for (int i = 0; i < n; i++)
    {
        cle += arr[i] <= c;
        cg += arr[i] > c;
    }

    if (cle <= cg)
    {
        ll ans = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] > c)
                ans += arr[i] - c;
        cout << ans << "\n";
    }
    else
    {
        ll ans = 0;
        for (int i = n / 2; i < n; i++)
            ans += arr[i] - c;

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