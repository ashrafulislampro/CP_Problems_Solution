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
#define pll pair<ll, ll>
template <typename T>
using vec = vector<T>;

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// formula " a^b = { (a^2)^b/2    if b is even"
// formula " a^b = { a*(a^2)^b-1/2    if a is odd"
ll calPow(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    if (exponent == 1)
        return (base % mod);

    ll temp = calPow(base, exponent / 2);
    if (exponent & 1)
    {
        // if the exponent is odd, then temp * temp * base
        return (((temp * temp) % mod) * base) % mod;
    }
    else
    {
        // if the exponent is even, then temp * temp
        return (temp * temp) % mod;
    }
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << calPow(a, b) << "\n";
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

// https://cses.fi/problemset/task/1095/