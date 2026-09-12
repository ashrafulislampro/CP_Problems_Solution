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

vector<pair<int, int>> pr = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};
ll n;
map<pair<ll, ll>, int> mp;
bool isOk(int sr, int sc)
{
    if (1 <= sr and sr <= n and 1 <= sc and sc <= n)
    {
        if (mp[{sr, sc}] != 1)
        {
            mp[{sr, sc}] = 1;
            return true;
        }
        else
            return false;
    }
    return false;
}
void solve()
{
    ll a, b, m, cnt = 0;
    cin >> n >> m;

    vector<pair<ll, ll>> arr;

    while (m--)
    {
        cin >> a >> b;
        arr.push_back({a, b});
        mp[{a, b}] = 1;
    }

    for (auto par : arr)
    {
        for (auto it : pr)
        {
            int c_r = par.ft + it.ft;
            int c_c = par.sd + it.sd;
            if (isOk(c_r, c_c))
                cnt++;
        }
    }

    ll ans = n * n;
    ans -= cnt + arr.sz();
    cout << ans << "\n";
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37