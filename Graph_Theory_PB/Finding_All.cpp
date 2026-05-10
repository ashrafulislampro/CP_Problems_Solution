#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define sz() size()

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

int fun(int x, int y)
{
    if (x == y)
    {
        return 0;
    }
    else if (x > y)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;

    set<int> st;
    st.insert(0);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = fun(x, arr[i]);
        if (i + 1 == n)
        {
            st.insert(x);
        }
    }
    sort(arr.begin(), arr.end());
    x = 0;
    for (int i = 0; i < n; i++)
    {
        x = fun(x, arr[i]);
        if (i + 1 == n)
        {
            st.insert(x);
        }
    }
    reverse(arr.begin() + n / 2, arr.end());
    x = 0;
    for (int i = 0; i < n; i++)
    {
        x = fun(x, arr[i]);
        if (i + 1 == n)
        {
            st.insert(x);
        }
    }
    sort(arr.rbegin(), arr.rend());
    x = 0;
    for (int i = 0; i < n; i++)
    {
        x = fun(x, arr[i]);
        if (i + 1 == n)
        {
            st.insert(x);
        }
    }

    for (auto val : st)
    {
        cout << val << " ";
    }
    cout << endl;
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