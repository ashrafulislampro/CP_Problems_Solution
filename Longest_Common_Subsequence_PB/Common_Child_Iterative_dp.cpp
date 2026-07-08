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


string str1, str2;
ll dp[2][5005];

void solve()
{
    ll  i, j, m, n;
    cin >> str1 >> str2;
    n = str1.sz();
    m = str2.sz();

    for (i = n - 1; i >= 0; i--)
    {
        for (j = m - 1; j >= 0; j--)
        {
            if (str1[i] == str2[j])
                dp[i & 1][j] = 1 + dp[(i + 1) & 1][j + 1];
            else
            {
                dp[i & 1][j] = max(dp[(i + 1) & 1][j], dp[i & 1][j+1]);
            }
        }
    }

    cout << dp[0][0] << "\n";
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Sample Input:
HARRY
SALLY

Sample Output:
2

https://www.hackerrank.com/contests/master/challenges/common-child/problem
*/