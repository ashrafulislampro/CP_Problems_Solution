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
// Euler Totient Function
void solve()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << n - 1 << "\n";
    }
    else
    {
        vector<int> arr;
        int len = sqrt(n);
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (isPrime(i))
                {
                    arr.pb(i);
                }
            }
        }

        int coprime = n;
        for (auto &it : arr)
        {
            coprime *= (1.0 - (1.0 / it));
        }
        cout << coprime << "\n";
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