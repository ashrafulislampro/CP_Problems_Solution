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

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    ordered_set<pair<int, int>> st;

    for (auto &x : arr)
        cin >> x;

    for (int i = 0; i < k; i++)
        st.insert({arr[i], i});

    for (int i = 0; i <= n - k; i++)
    {
        if(k % 2 == 1)
            cout << (st.find_by_order(k / 2))->first << " ";
        else
            cout << (st.find_by_order((k-1) / 2))->first << " ";

        auto it = st.find({arr[i], i});
        st.erase(it);
        if (i + k < n)
            st.insert({arr[k + i], k + i});
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37