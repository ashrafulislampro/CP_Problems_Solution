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
bool isPrime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
void solve(int num)
{
    int a, b, c, i, j, k, m, n, o, x, y, z;
    for (i = num - 2, j = 2; j <= i; j++, i--)
    {
        if (isPrime(i) and isPrime(j))
        {
            cout << num << " = " << j << " + " << i << "\n";
            return;
        }
    }
}
int main()
{
    ASHRAFUL

    int n;

    while (cin >> n and n != 0)
        solve(n);

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

// https://onlinejudge.org/external/5/543.pdf