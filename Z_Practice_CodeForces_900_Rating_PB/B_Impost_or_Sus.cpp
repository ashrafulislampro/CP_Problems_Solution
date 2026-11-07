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

    string ss;
    cin >> ss;
    int len = ss.sz(), mn_cnt = 0;
    if (ss[0] == 'u')
        mn_cnt = 1, ss[0] = 's';
    for (int i = 1; i < len - 1; i++)
    {
        if (ss[i] == ss[i + 1] and ss[i + 1] == 's')
            continue;
        if (ss[i] == ss[i + 1] and ss[i + 1] == 'u')
        {
            mn_cnt++;
            ss[i + 1] = 's';
        }
    }
    if (ss[len - 1] == 'u')
        mn_cnt++;
    cout << mn_cnt << "\n";
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