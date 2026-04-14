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

void solve()
{
    ll n, q, x;
    cin >> n >> q;

    vector<pair<ll, ll>> arr;
    ordered_set<pair<ll, ll>> ost;
    for (ll i = 1; i <= n; i++)
    {
        cin >> x;
        arr.push_back({x, i});
        ost.insert({x, i});
    }

    while (q--)
    {
        ll a, b;
        char ch;
        cin >> ch >> a >> b;

        if (ch == '!')
        {
            
            ost.erase(arr[a-1]);
            arr[a-1] = {b, a};
            ost.insert({b, a});
        }
        else
        {
            cout << (ost.order_of_key({b + 1, 0}) - ost.order_of_key({a, 0})) << endl;
        }
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37