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
    ll n, m, mx_ele = 0, x, l, r;
    cin >> n >> m;
    vll arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > mx_ele)
            mx_ele = x;
    }
    char ch;
    while (m--)
    {
        cin >> ch;
        if (ch == '+')
        {
            cin >> l >> r;
            if (l <= mx_ele and mx_ele <= r)
                mx_ele++;
        }
        if (ch == '-')
        {
            cin >> l >> r;
            if (l <= mx_ele and mx_ele <= r)
                mx_ele--;
        }
        cout << mx_ele << " ";
    }
    cout << "\n";
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