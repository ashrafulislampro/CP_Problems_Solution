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
    string ss;
    cin >> ss;

    int tot0 = count(ss.begin(), ss.end(), '0'), tot1 = n - tot0;

    if (ss[0] == '1')
    {
        cout << tot0 << "\n";
        return;
    }

    int ans = min(tot1, tot0);

    for (int i = 0, cur1 = 0; i < n; i++)
    {
        if (ss[i] == '1')
            cur1++;
        int cur0 = (i + 1) - cur1;
        int rem0 = tot0 - cur0;
       
        ans = min(ans, rem0 + cur1);
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