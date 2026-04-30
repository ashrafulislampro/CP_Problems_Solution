#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define x first
#define y second
typedef vector<int> vi;
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

ll n, m;
const ll MX = 1e4 + 1;
vector<bool> vis(2 * MX, false);

void bfs()
{
    queue<pair<ll, ll>> q;
    q.push({n, 0});
    vis[n] = true;

    while (!q.empty())
    {
        auto [x, level] = q.front();
        q.pop();

        if (x == m)
        {
            cout << level << endl;
            return;
        }

        if (x * 2 < 2 * MX && !vis[x * 2])
        {
            vis[x * 2] = true;
            q.push({x * 2, level + 1});
        }

        if (x - 1 >= 0 && !vis[x - 1])
        {
            vis[x - 1] = true;
            q.push({x - 1, level + 1});
        }
    }
}

int main()
{
    ASHRAFUL

    cin >> n >> m;
    bfs();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
input:
4 6
output:
2


input:
99 100
output:
50
*/

// https://codeforces.com/problemset/problem/520/B