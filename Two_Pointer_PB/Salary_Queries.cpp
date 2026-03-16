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
    int n, q, x, k;
    cin >> n >> q;
    vector<int> arr;
    ordered_set<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
        st.insert({x, i});
    }
    char ch;
    ll a, b;
    while (q--)
    {
        cin >> ch;
        if (ch == '!')
        {
            cin >> k >> x;
            int val = arr[k - 1];
            arr[k - 1] = x;
            st.erase({val, k - 1});
            st.insert({x, k - 1});
        }
        else
        {
            cin >> a >> b;
            auto cnt1 = st.order_of_key({a, 0});
            auto cnt2 = st.order_of_key({b + 1, 0});
            cout << (cnt2 -cnt1) << endl;
        }
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