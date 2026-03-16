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

ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;
    ordered_set<int> st;
    st.insert(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > *st.rbegin())
            st.insert(arr[i]);
    }

    if ((int)st.size() < 3)
    {
        cout << 0 << endl;
    }
    else
    {
        ll sz = (ll)st.size();
        ll val = fact(sz) / (fact(3) * fact(sz - 3));
        cout << val << endl;
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