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
    int n, cnt = 0;
    cin >> n;

    for (int i = 1; i <= 2 * n; i++)
    {
        if (i % 3 != 0 and cnt < n)
        {
            cnt++;
            cout << i << " ";
        }
    }
    cout << "\n";
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
3
1
3
6

Sample Output:
1 
1 2 4 
1 2 4 5 7 8 


https://codeforces.com/problemset/problem/2231/A
*/