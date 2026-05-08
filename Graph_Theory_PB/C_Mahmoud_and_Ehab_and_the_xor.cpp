#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second

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

const int pw1 = (1 << 17);
const int pw2 = (1 << 18);

void solve()
{
    int n, x;
    cin >> n >> x;

    if (n == 1)
    {
        cout << "YES\n"
             << x << "\n";
    }
    else if (n == 2 and x == 0)
    {
        cout << "NO" << endl;
    }
    else if (n == 2)
    {
        cout << "YES\n0 " << x << endl;
    }
    else
    {
        int i, ans = 0;
        cout << "YES" << endl;
        for (int i = 1; i < n - 2; i++)
        {
            cout << i << " ";
            ans ^= i;
        }

        if (ans == x)
        {
            cout << pw1 + pw2 << " " << pw1 << " " << pw2 << "\n";
        }
        else
        {
            cout << pw1 << " " << ((pw1 ^ x) ^ ans) << " 0 \n";
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