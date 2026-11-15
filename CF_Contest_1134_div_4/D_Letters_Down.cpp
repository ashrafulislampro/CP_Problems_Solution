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
    int n;
    cin >> n;
    string ss;
    cin >> ss;
    vector<pii> collections;
    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        int x = ss[i], y = ss[j];
        if (x > y)
            swap(x, y);
        collections.push_back({x, y});
    }
    int ans = 0;
    sort(all(collections));
    auto [l, r] = collections[0];
    for (auto [lll, rrr] : collections)
    {
        if (lll <= r)
            r = max(rrr, r);
        else
        {
            ans += r - l;
            l = lll, r = rrr;
        }
    }
    ans += r - l;
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
// https://codeforces.com/contest/2290/problem/D