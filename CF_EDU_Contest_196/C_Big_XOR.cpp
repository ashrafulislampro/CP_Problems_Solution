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
    int bit = __lg(n);
    bool cnt[bit + 5]{};
    vi ans;
    // cerr << bit << "\n";
    for (int i = n, b = bit + 1; i >= 1; i--)
    {
        b = max(b, __lg(i));
        if (cnt[b])
        {
            ans.pb(0);
            for (int j = 0; j <= bit + 1; j++)
            {
                cnt[j] ^= (i >> j) & 1;
                // cerr << val << " = " << i << ", " << j << " === "
                //      << cnt[j] << " = ";
                // cnt[j] ^= val;
                // cerr << cnt[j] << endl;
            }
        }
        else
        {
            if (__lg(i) < b)
            {
                ans.pb(1);
                for (int j = 0; j <= bit + 1; j++)
                    cnt[j + 1] ^= (i >> j) & 1;
            }
            else
            {
                ans.pb(0);
                for (int j = 0; j <= bit + 1; j++)
                    cnt[j] ^= (i >> j) & 1;
            }
        }
        if (cnt[b])
            b--;
    }
    reverse(ans.begin(), ans.end());
    for (auto it : ans)
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
// https://codeforces.com/contest/2283/problem/C