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
bool query(ll u, ll v, ll d)
{
    cout << "? " << u << " " << v << " " << d << "\n";
    bool greater;
    cin >> greater;
    return greater;
}

void print(ll u, ll v, ll d)
{
    cout << "! " << u << " " << v << " " << d << "\n";
}
void solve()
{
    ll n;
    cin >> n;

    ll first_farthest = 2, distance = 2;
    for (ll i = 2; i <= n; i++)
    {
        while (query(1, i, distance))
        {
            first_farthest = i;
            distance++;
        }
    }

    ll second_farthest = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (i == first_farthest)
            continue;
        while (query(i, first_farthest, distance))
        {
            second_farthest = i;
            distance++;
        }
    }
    print(first_farthest, second_farthest, distance - 1);
}
signed main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
