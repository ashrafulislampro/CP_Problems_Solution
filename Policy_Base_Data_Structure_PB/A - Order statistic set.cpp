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
void solve()
{
    char ch;
    int n;
    cin >> ch >> n;

    if (ch == 'I')
    {
        ost.insert(n);
    }
    else if (ch == 'D')
    {
        ost.erase(n);
    }
    else if (ch == 'C')
    {
        cout << ost.order_of_key(n) << endl;
    }
    else
    {
        if (n > ost.size())
        {
            cout << "invalid" << endl;
        }
        else
        {
            cout << (*ost.find_by_order(--n)) << endl;
        }
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