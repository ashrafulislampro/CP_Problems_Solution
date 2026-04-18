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

    vector<int> arr;
    for (int i = 1; i <= 9; i++)
    {
        int res = i;
        arr.push_back(res);
        for (int j = 1; j < 9; j++)
        {
            res = res * 10 + i;
            arr.push_back(res);
        }
    }
    sort(arr.begin(), arr.end());

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flg = true;
        for (int i = 0; i < 81; i++)
        {
            if (n < arr[i])
            {
                cout << i << endl;
                flg = false;
                break;
            }
        }
        if (flg)
            cout << 81 << endl;
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37