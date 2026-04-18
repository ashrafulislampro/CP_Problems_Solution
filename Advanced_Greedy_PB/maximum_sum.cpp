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
    int n, k;
    cin >> n >> k;
    vector<int> X(n), Y(n);
    for (auto &x : X)
        cin >> x;
    for (auto &x : Y)
        cin >> x;

    sort(X.rbegin(), X.rend());
    sort(Y.begin(), Y.end());
    int sum = 0;
    for (int i = 0, j = 0; i < n; i++)
    {
        if (j < k)
        {
            sum += max(X[i], Y[i]);
            j++;
        }
        else
        {
            sum += Y[i];
        }
    }
    cout << sum << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37