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
    ll a, b, c, i, j, k, m,mm, n, h, x, y, z;
    cin >> n >> m >> h;

    vll arr(n), tmp;
    input(arr);
    tmp = arr;
    vector<pii> pr;
    mm = m;
    while (m--)
    {
        cin >> b >> c;
        b--;
        pr.push_back({b, c});
    }
    for (int i = mm - 1; i >= 0; i--)
    {
        ll idx = pr[i].ft;
        ll vv = pr[i].sd;
        ll val = arr[idx] + vv;
        if (val > h)
        {
            arr = tmp;
            break;
        }
        arr[idx] += vv;
    }
    for (auto it : arr)
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

// https://codeforces.com/problemset/problem/2185/D