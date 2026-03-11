#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(x) -> number of elements  "<x" present in the list
// find_by_order(k) -> k-th smallest element (0 based indexing)

void solve()
{
    ordered_set<int> st;
    int q, x;
    cin >> q;
    char ch;
    while (q--)
    {
        cin >> ch >> x;
        if (ch == '!')
        {
            st.insert(x);
        }
        else
        {
            if (st.find(x) != st.end())
            {
                cout << "Yes" << " = ";
                cout << x << "(" << st.order_of_key(x) << ")" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
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