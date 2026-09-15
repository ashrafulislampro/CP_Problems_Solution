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

    string a, b;
    cin >> a >> b;

    vector<int> a_even, a_odd;
    vector<int> b_even, b_odd;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[i] == '1')
                a_even.pb(i / 2);
            if (b[i] == '1')
                b_even.pb(i / 2);
        }
        else
        {
            if (a[i] == '1')
                a_odd.pb(i / 2);
            if (b[i] == '1')
                b_odd.pb(i / 2);
        }
    }
    if (a_even.sz() != b_even.sz() || a_odd.sz() != b_odd.sz())
    {
        cout << -1 << endl;
        return;
    }

    ll ans = 0;
    for (size_t i = 0; i < a_even.sz(); i++)
        ans += abs(a_even[i] - b_even[i]);

    for (size_t i = 0; i < a_odd.sz(); i++)
        ans += abs(a_odd[i] - b_odd[i]);

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