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

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    ll i, k, m, n;
    cin >> k;
    vector<ll> arr(k);
    for (auto &x : arr)
        cin >> x;

    sort(arr.rbegin(), arr.rend());

    if (k == 2)
    {
        cout << arr[0] << " " << arr[1] << "\n";
        return;
    }

    ll x = arr[0];
    ll y = arr[1];
    for (i = 1; i < k - 1; i++)
    {

        ll rem = arr[i - 1] % arr[i];

        if (rem != arr[i + 1])
        {
            cout << -1 << "\n";
            return;
        }
    }
    cout << x << " " << y << "\n";
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

/*
Sample Input:
6
2
1 1
2
1 2
4
1 2 3 4
3
6 4 2
4
3 8 13 5
3
1 1 1

Sample Output:
1 1
2 1
-1
6 4
13 8
-1

https://codeforces.com/problemset/problem/2234/A
*/