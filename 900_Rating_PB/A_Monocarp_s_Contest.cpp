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
    ll n, z_cnt = 0, o_cnt = 0;
    cin >> n;
    vi arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            z_cnt++;
        else
            o_cnt++;
    }

    if (z_cnt < 2)
    {
        cout << -1 << "\n";
    }
    else
    {
        if (arr[1] == 0 and arr[n] == 0)
        {
            cout << 0 << "\n";
        }
        else if (z_cnt >= 2 and (arr[1] == 0 || arr[n] == 0))
        {
            cout << 1 << "\n";
        }
        else if (z_cnt >= 2 and arr[1] != 0 and arr[n] != 0)
        {
            cout << 2 << "\n";
        }
        else
            cout << -1 << "\n";
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