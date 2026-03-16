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
    int n;
    cin >> n;
    ordered_set<int> st;
    while (n--)
    {
        char ch;
        int x;
        cin >> ch >> x;
        if (ch == 'I')
            st.insert(x);
        else if (ch == 'D')
            st.erase(x);
        else if (ch == 'C')
            cout << st.order_of_key(x) << endl;
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