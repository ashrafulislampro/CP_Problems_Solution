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

int n, pos = 0;
vector<int> par, dp, arr;

// print subsequence
void path_print()
{
    vector<int> path;
    while (pos != -1)
    {
        path.pb(arr[pos]);
        pos = par[pos];
    }
    reverse(path.begin(), path.end());
    for (auto &it : path)
    {
        cout << it << " ";
    }
    cout << "\n";
}

// Longest Increasing Subsequence of length

int LIS()
{
    par.resize(n, -1);
    dp.resize(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] and dp[i] < dp[j] + 1)
            {
                dp[i] = dp[j] + 1;
                par[i] = j;
            }
        }
    }

    int ans = dp[0];
    for (int i = 0; i < n; i++)
    {
        if (dp[i] > ans)
        {
            ans = dp[i];
            pos = i;
        }
    }

    return ans;
}

void solve()
{
    cin >> n;
    arr.resize(n, 0);
    for (auto &it : arr)
        cin >> it;

    cout << LIS() << "\n";
    path_print();
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
1
10
8 3 4 6 5 2 0 7 9 1

Sample Output:
5
3 4 6 7 9
*/