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
    int n, first;
    cin >> n >> first;

    ll mn, mx, ans;
    mn = mx = ans = first;
    n--;
    while (n--)
    {
        ll x;
        cin >> x;
        ans = max({ans, x, x - mn, x - mx, x + mn, x + mx});
        ll nmn = min({x, mn + x, 2 * mn + x, mx + x, 2 * mx + x});
        ll nmx = max({x, mn + x, 2 * mn + x, mx + x, 2 * mx + x});

        mn = nmn;
        mx = nmx;
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