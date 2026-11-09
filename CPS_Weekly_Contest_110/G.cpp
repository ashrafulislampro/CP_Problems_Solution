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
    ll a = -1, b, c, idx = -1, t, j, k, m, n, o, x, y, z;
    cin >> n >> t;
    vi arr(n), brr(n);
    input(arr);
    input(brr);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= t)
        {
            if (a == -1)
            {
                a = brr[i];
                idx = i + 1;
                t--;
                continue;
            }
            if (brr[i] > a)
            {
                a = brr[i];
                idx = i + 1;
            }
        }
        t--;
    }
    if (idx != -1)
        cout << idx;
    else
        cout << -1;
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