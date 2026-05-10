#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x);
#define ph(x) push(x);
#define sz() size();

// Ordered Set Declaration
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;
using ll = long long;

// find_by_order(x) => return an iterator of k-th smallest element(0-based)
// order_of_key(x) => return a number of element less than x

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    int mod = 32768;

    for (int k = 0; k < n; k++)
    {
        int ans = 20;
        for (int i = 0; i <= 15; i++)
        {
            for (int j = 0; j <= 15; j++)
            {
                if (((arr[k] + i) << j) % mod == 0)
                {
                    ans = min(ans, j + i);
                }
            }
        }
        cout << ans << " ";
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Input:
4
19 32764 10240 49

Output:
14 4 4 15

https://codeforces.com/problemset/problem/1661/B
*/