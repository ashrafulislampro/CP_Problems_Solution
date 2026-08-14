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

void solve()
{
    int n;
    cin >> n;
    vi arr;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 10; j >= 0; j--)
        {
            int val = pow(3, j);
            if (val <= n)
            {
                n = n - val;
                arr.pb(j);
                break;
            }
        }
        if (n == 0)
            break;
    }
    cout << arr.sz() << "\n";
    for (auto &it : arr)
    {
        cout << it << " ";
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37