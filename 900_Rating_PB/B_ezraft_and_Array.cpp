#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
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
vll ans = {1, 2, 3};
void solve()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cout << "-1" << "\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " \n"[i + 1 == n];
        }
    }
}
int main()
{
    ASHRAFUL
    while (ans.sz() <= 50)
    {
        ans.pb(*ans.rbegin() * 2);
    }
    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37