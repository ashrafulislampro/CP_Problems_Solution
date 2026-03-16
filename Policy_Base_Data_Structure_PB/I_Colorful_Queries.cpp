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
    int n, q, x;
    cin >> n >> q;
    ordered_set<int> st;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (mp[x] == 0)
            mp[x] = i;
        st.insert(i);
    }

    int idx = 0;
    while (q--)
    {
        cin >> x;
        int i = mp[x];
        cout << st.order_of_key(i) + 1 << endl;
        st.erase(i);
        mp[x] = idx;
        st.insert(idx);
        idx--;
       
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
