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
const ll mod = (ll)998244353;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

ll twoPower(ll exp)
{
    ll ans = 1;
    ll base = 2;
    // exp 13 1101 & 0001
    // 13 = 1101
    // 13 / 2 = 6 = 110
    // 6/2 = 3 = 11
    // 3/2 = 1 = 1
    // 1/2 = 0

    while (exp > 0)
    {
        if (exp & 1 == 1)
        {
            ans = (ans * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return ans;
}
void solve()
{
    ll n, m, r, c;
    cin >> n >> m >> r >> c;

    ll exp = (c - 1) * n + (r - 1) * m - (c - 1) * (r - 1);

    cout << twoPower(exp) << "\n";
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