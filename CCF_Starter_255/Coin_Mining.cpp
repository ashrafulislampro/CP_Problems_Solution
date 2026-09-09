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
    int x, y, k = 1, days = 1, t_cost = 0, t_rev = 0, tmp_ct, tmp_rev;
    cin >> x >> y;
    t_cost = x;
    t_rev = y * k * k;
    tmp_ct = x, tmp_rev = t_rev;
    while (true)
    {
        days++;
        k++;
        tmp_ct += x;
        tmp_rev += (y * k * k);

        if (tmp_rev > tmp_ct)
        {
            cout << days << "\n";
            return;
        }
        else
        {
            tmp_ct -= x;
            t_cost += tmp_ct;

            t_rev -= (y * k * k);
            k--;
            t_rev += (y * k * k);
        }
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