#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n;
    vll arr(n), brr(n);
    for (auto &it : arr)
        cin >> it;
    for (auto &it : brr)
        cin >> it;

    // prefix sum
    for (int i = 1; i < n; i++)
        brr[i] += brr[i - 1];

    sort(arr.rbegin(), arr.rend());
    ll ans = 0;
    while (!arr.empty())
    {
        x = arr.back();
        while (!arr.empty() and arr.back() < x)
            arr.pop_back();

        ll ihv = arr.sz();
        auto it = upper_bound(brr.begin(), brr.end(), ihv) - brr.begin();
        ans = max(ans, x * it);
        arr.pop_back();
    }
    cout << ans << "\n";
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

// https://codeforces.com/problemset/problem/2193/D