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

void solve()
{
    int n;
    cin >> n;
    vector<int> dd_line(n), prt(n);
    vector<pair<int, int>> arr;
    for (auto &x : dd_line)
        cin >> x;
    for (auto &x : prt)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        arr.emplace_back(dd_line[i], prt[i]);
    }
    sort(arr.begin(), arr.end());

    priority_queue<int, vector<int>, greater<int>> pq;
    int sum = 0;
    for (auto &[deadline, profit] : arr)
    {
        if (pq.size() < deadline)
        {
            sum += profit;
            pq.push(profit);
        }
        else
        {
            if (pq.top() < profit)
            {
                sum += profit;
                sum -= pq.top();
                pq.pop();
                pq.push(profit);
            }
        }
    }
    cout << pq.size() << " " << sum << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37