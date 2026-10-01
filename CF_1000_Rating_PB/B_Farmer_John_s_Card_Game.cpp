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

    vector<vll> arr(n, vll(m));

    vll perm(n, -16);
    bool val = true;
    ll c = 0;

    for (vll &ar : arr)
    {
        for (ll &it : ar)
            cin >> it;

        ll minN = *min_element(ar.begin(), ar.end());
        if (minN < n)
            perm[minN] = c++;

        val &= minN < n;
        sort(ar.begin(), ar.end());
        ll last = ar[0] - n;
        for (ll i : ar)
        {
            val &= last + n == i;
            last = i;
        }
    }
    if (!val)
    {
        cout << -1 << "\n";
        return;
    }

    for (ll i : perm)
        cout << i + 1 << ' ';
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