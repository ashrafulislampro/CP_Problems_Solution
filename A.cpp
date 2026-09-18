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
    ll n, o_cnt = 0, mx_subst = 0, tmp = 0;
    cin >> n;
    string ss;
    cin >> ss;
    for (int i = 0; i < n; i++)
    {
        if (ss[i] == '1')
        {
            tmp = 0;
            o_cnt++;
            continue;
        }
        tmp++;
        mx_subst = max(mx_subst, tmp);
    }

    cout<<mx_subst+o_cnt<<"\n";

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