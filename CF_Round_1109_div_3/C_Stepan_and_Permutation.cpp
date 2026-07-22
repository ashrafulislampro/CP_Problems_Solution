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

void Solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll gc = __gcd(x, y);
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int g = 0; g < gc; g++)
    {
        vector<int> expected, got;
        for (int i = g; i < n; i += gc)
            expected.push_back(i + 1), got.push_back(arr[i]);
        sort(got.begin(), got.end());
        if (expected != got)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
        Solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

// https://codeforces.com/contest/2244/problem/C