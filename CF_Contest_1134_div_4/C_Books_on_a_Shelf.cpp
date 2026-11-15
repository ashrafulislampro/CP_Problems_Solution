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
    ll a = 0, b = 0, c, i, j, k, m, n, o, x, y, z;
    cin >> n;
    vi arr(n), aa, bb;
    input(arr);
    map<int, int> frq;
    for (int i = 0; i < n; i++)
    {
        if (frq[arr[i]] == 0)
        {
            a++;
            aa.pb(arr[i]);
            frq[arr[i]]++;
            continue;
        }
        frq[arr[i]]++;
        bb.pb(arr[i]);
    }

    sort(all(aa));
    sort(all(bb));

    if ((int)bb.sz() >= 2)
    {
        b = 1;
        for (int i = 1; i < (int)bb.sz(); i++)
        {
            if (bb[i] > bb[i - 1])
                b++;
        }
    }
    else if (bb.sz() == 1)
        b = 1;

    cout << a + b << "\n";
    for (auto it : aa)
        cout << it << ' ';
    for (int i = (int)bb.sz() - 1; i >= 0; i--)
    {
        cout << bb[i] << ' ';
    }
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