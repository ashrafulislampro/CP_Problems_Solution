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
    ll n, x, y, z, cnt_1, cnt_2;
    cin >> n >> x >> y >> z;

    cnt_1 = ceil(n*1.0 / (x + y));
    ll val = ceil((n - (z * x))*1.0 / (x + (10 * y)));
    cnt_2 = z + max(0ll, val);
    
    cout << min(cnt_1, cnt_2) << "\n";
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
10
1 1 1 1
2 1 1 5
3 1 1 1
110 10 9 1
54 14 1 1
30 8 1 13
6 2 1 3
82 4 5 7
200 3 2 4
76 211 743 432

Sample Output:
1
1
2
2
3
4
2
8
13
1

https://codeforces.com/problemset/problem/2233/A
*/