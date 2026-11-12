#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define all(x) (x).begin(), (x).end()
#define input(arr)       \
    for (auto &it : arr) \
    cin >> it
#define forr(k, n) for (int i = k; i < n; i++) // k = start,  n = end
#define forrr(k, n) for (int i = k; i >= n; i--)
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
    ll k, x;
    cin >> k >> x;

    vi ans;
    ll val = (1ll << (k + 1)) - x;
    if (val == x)
    {
        cout << 0 << "\n";
        return;
    }
    int i = 120;
    while (val != x)
    {

        if (val < x)
        {
            ans.pb(2);
            ll xx = x - val;
            val += x - xx;
            x = xx;
        }
        else
        {
            ans.pb(1);
            ll vv = val - x;
            x += val - vv;
            val = vv;
        }

        --i;
        if (i == 0)
            break;
    }
    reverse(ans.begin(), ans.end());
    cout << ans.sz() << "\n";
    for (auto it : ans)
        cout << it << ' ';
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;

    while (T--)
    {
        solve(), cout << "\n";
    }

    return 0;
}

// Coded by Ashraful Islam @ml.ashraful37
// https://codeforces.com/problemset/problem/2138/A