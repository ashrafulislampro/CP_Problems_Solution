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

void solve()
{
    int a, b, c;
    scanf("%d%d", &a, &b);

    int gcd = __gcd(a, b);
    int cnt = 0;
    for (int i = 1; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            if (gcd / i == i)
                cnt++;
            else
                cnt += 2;
        }
    }

    printf("%d\n", cnt);
}
int main()
{
    ASHRAFUL

    int T = 1;
    scanf("%d", &T);
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37