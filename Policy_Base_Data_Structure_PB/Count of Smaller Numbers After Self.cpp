#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(x)
// find_by_order(k)

void solve()
{
    int x;
    vector<int> arr, ans;
    while (cin >> x)
    {
        arr.push_back(x);
    }
   
    ordered_set<int> st;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        ans.push_back(st.order_of_key(arr[i]));
        st.insert(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    for (auto vl : ans)
        cout << vl << " ";
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
