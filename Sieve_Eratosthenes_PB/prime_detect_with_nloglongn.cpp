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
ll n = 20;
vector<ll> isComposite(n + 1);
void solve()
{
    ll l = 23544556733, r = l + 232342;
    vector<ll> prime(r - l + 1);
    for (ll i = 4; i <= n; i += 2)
        isComposite[i] = 1;

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (isComposite[i] == 0)
        {
            for (ll j = i * i; j <= n; j += 2 * i)
            {
                isComposite[j] = 1;
            }
        }
    }

    for (ll i = 2; i * i <= r; i++)
    {
        if (isComposite[i] == 0)
        {
            ll x = (l + i - 1) / i;
            for (ll j = i * x; j <= r; j += i)
                prime[j - l] = 1;
        }
    }
}
int main()
{
    ASHRAFUL
    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37