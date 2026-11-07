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
bool is_ABC(string &ss, int i)
{
    if (i < 0 || i + 2 >= (int)ss.sz())
        return false;

    return (ss[i] == 'A' &&
            ss[i + 1] == 'B' &&
            ss[i + 2] == 'C');
}
void solve()
{
    int n, q, x;
    cin >> n >> q;
    string ss;
    cin >> ss;

    int ans = 0;
    for (int i = 0; i + 2 < n; i++)
    {
        if (is_ABC(ss, i))
            ans++;
    }

    char ch;
    while (q--)
    {
        cin >> x >> ch;
        x--;
        for (int i = x - 2; i <= x; i++)
        {
            if (is_ABC(ss, i))
                ans--;
        }

        ss[x] = ch;
        for (int i = x - 2; i <= x; i++)
        {
            if (is_ABC(ss, i))
                ans++;
        }
        cout << ans << "\n";
    }
}
int main()
{
    ASHRAFUL
    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37