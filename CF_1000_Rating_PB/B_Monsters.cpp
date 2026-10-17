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

bool cmp(pii &a, pii &b)
{
    if (a.ft == b.ft)
        return a.sd > b.sd;
    return a.ft < b.ft;
}
void solve()
{
    ll n, k, x;
    cin >> n >> k;
    vi ans;
    vector<pii> arr;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        arr.push_back({x, i});
    }

    // sort(arr.rbegin(), arr.rend());
    for (int i = 0; i < n; i++)
    {
        auto it = arr[i];
        int val = it.ft % k;
        if (val == 0)
        {
            ans.pb(it.sd);
        }
        arr[i] = {val, it.sd};
    }
    sort(arr.rbegin(), arr.rend(), cmp);
    for (auto it : arr)
    {
        if (it.ft == 0)
            continue;
        ans.pb(it.sd);
    }
    for (auto &it : ans)
        cout << it << ' ';
    cout << "\n";
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

// https://codeforces.com/problemset/problem/1849/B