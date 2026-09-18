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
    string st1, st2;
    cin >> st1 >> st2;

    char s1 = st1.back();
    char s2 = st2.back();

    if (s1 == s2)
    {
        if (st1.sz() == st2.sz())
            cout << "=\n";
        else if (s1 == 'S')
            cout << (st1.sz() < st2.sz() ? '>' : '<') << "\n";
        else
            cout << (st1.sz() < st2.sz() ? '<' : '>') << "\n";
    }
    else
        cout << ((s1 < s2) ? '>' : '<') << "\n";
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