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
int n, m;
int dp[1005][1005];
pair<int, int> next_path[1005][1005];
int arr[1005], brr[1005];
int LCS(int i, int j)
{
    if (i == n || j == m)
    {
        return 0;
    }
    if (dp[i][j] != -1)
        return dp[i][j];

    int ans = 0;
    if (arr[i] == brr[j])
    {
        ans = 1 + LCS(i + 1, j + 1);
        next_path[i][j] = {i + 1, j + 1};
    }
    else
    {
        int ans1 = LCS(i, j + 1);
        int ans2 = LCS(i + 1, j);

        ans = max(ans1, ans2);
        if (ans == ans1)
        {
            next_path[i][j] = {i, j + 1};
        }
        else
        {
            next_path[i][j] = {i + 1, j};
        }
    }
    
    return dp[i][j] = ans;
}
void path_print(int i, int j)
{
    if (i == n || j == m)
    {
        cout << "\n";
        return;
    }

    if (arr[i] == brr[j])
    {
        cout << arr[i] << " ";
    }

    auto it = next_path[i][j];
    path_print(it.ft, it.sd);
}
void solve()
{
    cin >> n >> m;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << LCS(0, 0) << "\n";
    path_print(0, 0);
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
8 6
3 1 3 2 7 4 8 2
6 5 1 2 3 4

Sample Output:
3
1 3 4 

https://cses.fi/problemset/task/3403/
*/