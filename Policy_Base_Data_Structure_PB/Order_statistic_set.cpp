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
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(x) -> number of elements  smaller than x present in the list
// find_by_order(k) -> k-th smallest element (0 based indexing)

void solve()
{
    int q, x;
    cin >> q;
    char ch;
    ordered_set<int> st;

    while (q--)
    {
        cin >> ch >> x;
        if (ch == 'I')
        {
            st.insert(x);
        }
        else if (ch == 'D')
        {
            st.erase(x);
        }
        else if (ch == 'C')
        {
            cout << st.order_of_key(x) << endl;
        }
        else
        {
            if (x > st.size())
            {
                cout << "invalid" << endl;
            }
            else
            {
                cout << *st.find_by_order(x - 1) << endl;
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