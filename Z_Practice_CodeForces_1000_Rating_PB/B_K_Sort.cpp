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

    vi arr(n), tmp;
    for (auto &it : arr)
        cin >> it;

    if (is_sorted(arr.begin(), arr.end()))
    {
        cout << 0 << "\n";
        return;
    }

    int lst = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > lst)
        {
            lst = arr[i];
            continue;
        }
        tmp.pb(lst - arr[i]);
    }

    sort(tmp.rbegin(), tmp.rend());

    ll ans = 0;
    while (tmp.sz() >= 1)
    {
        lst = tmp.back();
        ans += (ll)((tmp.sz() + 1) * lst);

        for (int i = tmp.sz() - 1; i >= 0; i--)
        {
            tmp[i] -= lst;
        }

        lst = tmp.back();
        while (tmp.sz() > 0 and lst == 0)
        {
            tmp.pop_back();
            lst = tmp.back();
        }
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