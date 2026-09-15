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
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n;
    vi arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[j] > arr[j + 1] and abs(arr[j] - arr[j + 1]) == 1)
            {
                int val = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = val;
            }
        }
    }
    if (is_sorted(arr.begin(), arr.end()))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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