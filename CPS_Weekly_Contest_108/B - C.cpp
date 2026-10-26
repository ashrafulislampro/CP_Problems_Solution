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
    int n, x;
    cin >> n;
    int att_a = 0, def_a = 0, att_p = 0, def_p = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        att_a += x;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        def_a += x;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        att_p += x;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        def_p += x;
    }

    if (att_a > att_p and def_a > def_p)
        cout << "A\n";
    else if (att_p > att_a and def_p > def_a)
        cout << "P\n";
    else
        cout << "DRAW\n";
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