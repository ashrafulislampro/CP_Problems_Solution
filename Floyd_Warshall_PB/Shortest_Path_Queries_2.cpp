#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

// Ordered Set Declaration
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

// find_by_order(x) => return an iterator of k-th smallest element(0-based)
// order_of_key(x) => return a number of element less than x

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
ll dist[405][405];
void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;
    // initialization
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            dist[i][j] = inf;
        }
    }
    // same node distance
    for (i = 1; i <= n; i++)
    {
        dist[i][i] = 0;
    }
    // input data
    for (i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b], c);
    }

    ll sum = 0;
    // Floyd-Warshall Algorithm
    // k ---> intermediate node
    for (k = 1; k <= n; k++)
    {
        // i ----> source node
        for (i = 1; i <= n; i++)
        {
            // j ----> destination node
            for (j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

                if (dist[i][j] < inf)
                    sum += dist[i][j];
            }
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


/*
Sample Input:
3 2
1 2 3
2 3 2

Sample Output:
25


https://atcoder.jp/contests/abc208/tasks/abc208_d
*/