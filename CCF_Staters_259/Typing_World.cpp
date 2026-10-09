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
    int n, m;
    cin >> n >> m;
    string s, l;
    cin >> s >> l;

    int ans = 0, l_cnt = 0, r_cnt = 0;

    for (int i = 0; i < n; i++)
    {
        auto it = find(l.begin(), l.end(), s[i]);
        if (it != l.end())
        {
            l_cnt++;
            r_cnt = 0;
        }
        else
        {
            l_cnt = 0;
            r_cnt++;
        }
        ans = max({ans, l_cnt, r_cnt});
    }
    cout << ans << "\n";
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