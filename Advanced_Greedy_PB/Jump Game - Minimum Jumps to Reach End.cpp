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

ordered_set<int> ost;
int n;
vector<int> arr;
int minJumps(int i)
{
    if (i >= n - 1)
    {
        return 0;
    }

    int ans = INT_MAX;
    for (int j = i + 1; j <= i + arr[i]; j++)
    {
        int val = minJumps(j);
        if (val != INT_MAX)
            ans = min(ans, 1 + val);
    }
    return ans;
}
void solve()
{
    cin >> n;
    arr.resize(n);

    for (auto &x : arr)
        cin >> x;
    int val = minJumps(0);
    cout << ((val == INT_MAX) ? -1 : val) << endl;
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37