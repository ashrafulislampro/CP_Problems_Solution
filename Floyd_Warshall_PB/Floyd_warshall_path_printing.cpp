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
const int inf = 1e9;
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

int dist[105][105];
// nxt[i][j] ==> indicate kre i theke j te jawar somai i er prer node ki hbe.
int nxt[105][105];

// i -> j
// nxt[i][j] = j

vector<int> path_print(int i, int j)
{
    if (nxt[i][j] == -1)
    {
        return {};
    }

    vector<int> path;
    // i theke j te jachhi, so i surute thakbe
    path.pb(i);
    int tmp_nxt_node = i;
    // when tmp_nxt_node == j, tar mane amra pouchai geci, tkhon while loop stop haia jabe.

    while (tmp_nxt_node != j)
    {
        tmp_nxt_node = nxt[tmp_nxt_node][j];
        path.pb(tmp_nxt_node);
    }

    
    // 1 -> 3 -> 5 -> 7
    // path_print(1, 7)
    // path = {1}
    // (i = 1, j = 7); (1 == 7 ? ) No
    // (i = 3), path push -> path = {1, 3};
    // (i = 3, j = 7); (3 == 7 ? ) No
    // (i = 5), path push -> path = {1, 3, 5};
    // (i = 5, j = 7); (5 == 7 ? ) No
    // (i = 7 ), path push -> path = {1, 3, 5, 7};
    // (i = 7, j = 7); (7 == 7 ? ) Yes
    // Terminate Loop
    // Final path -> {1, 3, 5, 7};
    
    
    return path;
}

void solve()
{
    int a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            dist[i][j] = inf;
    }

    for (i = 1; i <= n; i++)
        dist[i][i] = 0;

    for (i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b], c);
        dist[b][a] = min(dist[b][a], c);
    }

    // not found path
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (dist[i][j] == inf)
            {
                nxt[i][j] = -1;
            }
            else
            {
                nxt[i][j] = j;
            }
        }
    }
    // floyd warshall algorithm
    for (k = 1; i <= n; k++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];

                    // * ==> random node
                    // i -> * -> * -> k -> * -> * -> j
                    nxt[i][j] = nxt[i][k];
                }
            }
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