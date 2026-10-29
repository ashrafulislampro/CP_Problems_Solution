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
    ll n, ans = 0, g = 0, b = -1e18;
    cin >> n;
    vll arr(n);
    for (auto &it : arr)
        cin >> it;

    for (ll i = 0; i + 1 < n; i++)
    {
        if (arr[i] == arr[i + 1])
            ans++;
    }

    for (ll i = 0; i + 1 < n; i++)
    {
        ll x = (arr[i] == arr[i + 1] + 1) - (arr[i] == arr[i + 1]);
        ll y = (arr[i] + 1 == arr[i + 1]) - (arr[i] == arr[i + 1]);
        
        g = max(g, max(x, y));
        if (b != -1e18)
            g = max(g, b + y);
        b = max(b, x);
    }
    cout << ans + g << "\n";
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