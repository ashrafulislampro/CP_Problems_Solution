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
}
int main()
{
    ASHRAFUL
    vector<int> frq(5);
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        frq[x]++;
    }

    int ans = 0;
    for (auto it : frq)
    {
        if (it > 0)
            ans += it / 2;
    }
    cout << ans << "\n";
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37