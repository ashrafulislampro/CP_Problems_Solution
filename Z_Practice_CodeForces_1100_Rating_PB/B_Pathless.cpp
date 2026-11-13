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
    ll a = 0, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;

    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a += x;
        arr[i] = x;
    }

    if (m == a || m - a >= 2)
    {
        cout << -1;
    }
    else
    {
        b = m - a;

        if (b == 1)
        {
            sort(all(arr));
            vi ans;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 1)
                    ans.pb(arr[i]);
            }
            for (auto it : arr)
            {
                if (it != 1)
                    cout << it << ' ';
            }
            for (auto it : ans)
                cout << it << ' ';

            return;
        }
        for (auto it : arr)
        {
            cout << it << ' ';
        }
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
// https://codeforces.com/problemset/problem/2130/B