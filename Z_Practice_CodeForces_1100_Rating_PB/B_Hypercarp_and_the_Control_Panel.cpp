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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<int, int>> b;
    for (int i = 0; i < n; i++)
    {
        if (b.empty() || b.back().first != a[i])
        {
            b.emplace_back(a[i], 1);
        }
        else
        {
            b.back().second++;
        }
    }
    int m = b.size();
    for (int i = 0; i < m - 1; i++)
    {
        if (b[i].second > 1 && b[i + 1].second > 1)
        {
            cout << m + 2 << '\n';
            return;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (i < m - 1 && b[i].second > 1 && (i + 2 >= m || b[i + 2].first != b[i].first))
        {
            cout << m + 1 << '\n';
            return;
        }
        if (i > 0 && b[i].second > 1 && (i - 2 < 0 || b[i - 2].first != b[i].first))
        {
            cout << m + 1 << '\n';
            return;
        }
    }
    cout << m << '\n';
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