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
bool good(ll x)
{
    return x % 2 > 0 && x % 3 > 0 && x % 5 > 0 && x % 7 > 0;
}

ll get_naive(ll x)
{
    ll ans = 0;
    for (int i = 0; i < x; i++)
    {
        if (good(i))
            ans++;
    }

    return ans;
}
ll get(ll r)
{
    return (r / 210) * get_naive(210) + get_naive(r % 210);
}
void solve()
{
    ll l, r;
    cin >> l >> r;

    cout << get(r + 1) - get(l);
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
// https://codeforces.com/problemset/problem/2125/C