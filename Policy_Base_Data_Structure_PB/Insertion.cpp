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
    int n, m;
    cin >> n >> m;
    ordered_set<int> st;

    // insert elements
    st.insert(12);
    st.insert(30);
    st.insert(20);
    st.insert(15);
    st.insert(30);

    // print all elements
    for (auto vl : st)
        cout << vl << " ";
    cout << endl;
    // Delete an element
    st.erase(16); // no error occurs though the element is not present in the list.

    // after erase print all elements
    for (auto vl : st)
        cout << vl << " ";
    cout << endl;
    // Find an element
    if (st.find(20) != st.end())
    {
        cout << "{20} is found\n";
    }
    else
    {
        cout << "{20} is not found\n";
    }

    // lower_bound(x) -> returns iterator to the first element >= x

    // find lower bound of 16
    auto it = st.lower_bound(16);
    if (it != st.end())
        cout << *it << " \n"; // 20

    // upper_bound(x) -> returns iterator to the first element > x
    // find upper bound of 15
    auto i = st.upper_bound(15);
    if(i != st.end())
        cout<<*i<<endl; // 20


    // find_by_order(k) --> returns iterator to the k-th smallest element (0 based indexing)
    cout<<*st.find_by_order(3)<<endl; // 30


    // order_of_key(x) --> returns the number of elements strickly less than x
    cout<< st.order_of_key(20)<<endl; // 2

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