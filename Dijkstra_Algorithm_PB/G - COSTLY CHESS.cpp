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


// Knight movement
ll dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
ll dy[] = {1, -1, 1, -1, 2, -2, 2, -2};
vector<pair<pair<ll, ll>, ll>> graph[8][8];
vector<vector<ll>> Dijkstra(ll src_x, ll src_y)
{
    vector<vector<ll>> dist(8, vector<ll>(8,inf));
    vector<vector<bool>> visited(8, vector<bool>(8, false));
    dist[src_x][src_y] = 0;
    priority_queue<pair<ll, pair<ll, ll>>, vector<pair<ll, pair<ll,ll>>>, greater<>> q;
    q.push({0, {src_x, src_y}});
    while (q.sz())
    {
        pair<ll, pair<ll, ll>> par = q.top();
        q.pop();

        ll dis = par.ft;
        ll s_x = par.sd.ft;
        ll s_y = par.sd.sd;

        if (visited[s_x][s_y])
            continue;
        visited[s_x][s_y] = true;
        for (auto &it : graph[s_x][s_y])
        {
            ll next_x= it.ft.ft;
            ll next_y = it.ft.sd;
            ll edge_weight = it.sd;
            if (dis + edge_weight < dist[next_x][next_y])
            {
                dist[next_x][next_y] = dis + edge_weight;
                q.push({dist[next_x][next_y], {next_x, next_y}});
            }
        }
    }
    return dist;
}
void solve()
{
    ll a, b, c, d, k, i, j;

    for(a = 0; a< 8; a++){
        for(b = 0; b < 8; b++){
            for(k = 0; k < 8; k++){
                c = a + dx[k];
                d = b + dy[k];
                if(c >= 0 and c < 8 and d >= 0 and d < 8){
                    graph[a][b].push_back({{c, d}, a*c + b * d});
                }
            }
        }
    }

    vector<vector<ll>> ans[8][8];
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            ans[i][j] = Dijkstra(i, j);
        }
    }
    ll sx, sy, ex, ey;
    while(cin>>sx>>sy>>ex>>ey){
        cout<<ans[sx][sy][ex][ey]<<'\n';
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
Sample Input:
2 5 5 2
4 7 3 2
1 2 3 4

Sample Output:
42
78
18

https://www.spoj.com/problems/CCHESS/en/
*/