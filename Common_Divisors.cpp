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
    int a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n;

    vector<int> arr(n), cnt(1000001);

    // input array
    for (auto &it : arr)
        cin >> it;
    // count each element
    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]]++;
    }

    // The maximum GCD for two number. Iterate from 1000000 to 1
    for (ll i = 1000000; i >= 1; i--)
    {
        // count the multiples of i
        ll mult_cnt = 0;
        for (ll j = i; j <= 1000000; j += i)
        {
            mult_cnt += cnt[j];
            if (mult_cnt >= 2)
            {
                cout << i << "\n";
                return;
            }
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