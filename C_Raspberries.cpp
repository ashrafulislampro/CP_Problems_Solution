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
    int n, k, x, cnt = 0;
    cin >> n >> k;

    int ans = k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x % 2 == 0)
            cnt++;
        if (x % k == 0)
            ans = 0;
        ans = min(ans, k - x % k);
    }

    if (k == 4)
    {
        if (cnt >= 2)
            ans = 0;
        else if (cnt == 1)
            ans = min(ans, 1);
        else
            ans = min(ans, 2);
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