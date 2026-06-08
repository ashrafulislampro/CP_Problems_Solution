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
void solve()
{
    int a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n>>m;

    // initialization with infinite value
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            dist[i][j] = inf;
        }
    }

    // Same node
    for(i = 1; i <= n; i++){
        dist[i][i] = 0;
    }

    // input
    for(i = 1; i <= m; i++){
       int u, v, w;
       cin>>u>>v>>w;
       dist[u][v] = min(dist[u][v], w);
       dist[v][u] = min(dist[v][u], w);        
    }

    // k -----> all intermediate node
    for(k = 1; k <= n; k++){
        // i -----> all source node
        for(i = 1; i <= n; i++){
            // j -----> all destination node
            for(j = 1; j <= n; j++){
                // distance update
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            cout<<dist[i][j]<<" \n"[j==n];
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


/*
Input:
4 5
1 2 1
1 4 6
1 3 10
2 4 2
2 3 5

Output:
0 1 6 3
1 0 5 2
6 5 0 7
3 2 7 0

*/