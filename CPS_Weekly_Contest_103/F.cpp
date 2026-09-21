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

    vll arr(n);
    for (auto &it : arr)
        cin >> it;

    map<ll, int> frq;
    for (int i = 0; i < n; i++)
    {
        if (frq[arr[i]] == 0)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << frq[arr[i]] << " ";
        }
        frq[arr[i]] = i + 1;
    }
    cout << "\n";
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37