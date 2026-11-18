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
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> k;
    string ss;
    cin >> ss;

    ll cnt_one = count(ss.begin(), ss.end(), '1'), cnt_zero = n - cnt_one;
    char ch = (cnt_one > cnt_zero ? '1' : '0');
    for (int i = 0; i < n && k > 0; i++)
    {
        if (ss[i] != ch)
        {
            ss[i] = ch;
            k--;
        }
    }
    ll ans = 1;
    for (int i = 0, o = 0, z = 0; i < n; i++)
    {
        if (ss[i] == '1')
            ans += ++o;
        else
            ans += ++z;
    }
    cout << ans;
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
// https://codeforces.com/contest/2285/problem/B