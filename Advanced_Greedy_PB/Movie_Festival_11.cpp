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

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }

    return a.second < b.second;
}
void solve()
{
    int n, a, b;
    cin >> n;
    vector<pair<int, int>> arr, trck;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        arr.push_back({a, b});
    }
    sort(arr.begin(), arr.end(), cmp);

    int cnt = 1;
    trck.push_back({arr[0].first, arr[0].second});
    for (int i = 1; i < n; i++)
    {
        if (arr[i].first >= trck.back().second)
        {
            cnt++;
            trck.push_back({arr[i].first, arr[i].second});
        }
    }
    cout << cnt << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37