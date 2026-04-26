#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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

vector<ll> arr, ans;
vector<bool> isVisit;
vector<vector<ll>> adj_list;

void solve()
{
    int n;
    cin >> n;
    arr.resize(n + 1);
    isVisit.resize(n + 1, false);
    adj_list.resize(n + 1);
    ans.resize(n + 1, -1);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        ll l = i - arr[i], r = i + arr[i];
        bool pushed = false;
        if (l >= 1)
        {
            if (arr[i] % 2 != arr[l] % 2)
            {
                q.push(i);
                pushed = true;
                ans[i] = 1;
                isVisit[i] = true;
            }
            else
            {
                // 4 to 6  // i to l
                // consider, l to i
                adj_list[l].push_back(i);
            }
        }
        if (r <= n)
        {
            if (arr[i] % 2 != arr[r] % 2)
            {
                if (!pushed)
                {
                    q.push(i);
                    ans[i] = 1;
                    isVisit[i] = true;
                }
            }
            else
            {
                adj_list[r].push_back(i);
            }
        }
    }

    while (!q.empty())
    {
        ll x = q.front();
        q.pop();
        for (auto &frm : adj_list[x])
        { // fromNode -> x , dist[x]+1 = dist[fromNode]
            if (!isVisit[frm])
            {
                isVisit[frm] = true;
                q.push(frm);
                ans[frm] = ans[x] + 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " \n"[i == n];
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37