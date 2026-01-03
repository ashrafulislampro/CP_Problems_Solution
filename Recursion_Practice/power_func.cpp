#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
ll normalPow(ll a, ll b) // using loop
{
    ll ans = 1;
    for (ll i = 1; i <= b; i++)
    {
        ans *= a;
    }
    return ans;
};

ll normalPow1(ll a, ll b) // using recursion
{
    if (b == 0)   // base case
        return 1; // pow(a, 0) == 1

    ll ans = a;
    ans *= normalPow1(a, b - 1); // recursive case
    return ans;
}
// binary exponentiation
ll optimizePower(ll a, ll b)
{
    if (b == 0)
        return 1;

    if (b % 2 == 1)
        return a * optimizePower(a, b - 1);
    if (b % 2 == 0)
    {
        ll half = optimizePower(a, b / 2);
        return half * half;
    }
}
void solve()
{
    int a = 2, b = 10;
    cout << normalPow1(a, b) << endl;
    cout << optimizePower(a, b) << endl;
    cout << normalPow(a, b);
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}