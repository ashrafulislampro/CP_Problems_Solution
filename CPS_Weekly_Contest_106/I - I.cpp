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

vi build(int id, int k)
{
    vi arr;
    for (int i = 0; i < k; i++)
        arr.pb(i < id - 1 ? i + 2 : 1);

    return arr;
}
void solve()
{
    int k, n;
    cin >> k >> n;

    int ans = 1;
    for (int i = 1; i < k; i++)
    {
        vi arr = build(i, k - 1);
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if (sum <= n - 1)
            ans = i;
    }

    vi res, arr;
    res.pb(1);
    arr = build(ans, k - 1);
    for (auto it : arr)
        res.pb(res.back() + it);

    for (auto it : res)
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