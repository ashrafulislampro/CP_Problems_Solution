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

vector<string> adj_list;
vector<vector<bool>> vis;
vector<pair<int, int>> pr = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int n, m;
bool isValid(int sr, int sc)
{
    if (sr < 0 || sr >= n || sc < 0 || sc >= m)
        return false;
    return true;
}
void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pp();
        for (int x = 0; x < 4; x++)
        {
            int si = par.ft + pr[x].ft;
            int sj = par.sd + pr[x].sd;
            if (isValid(si, sj) and adj_list[si][sj] == '.' and !vis[si][sj])
            {
                q.push({si, sj});
                vis[si][sj] = true;
            }
        }
    }
}
void solve()
{

    cin >> n >> m;
    adj_list.resize(n);
    vis.resize(n + 1, vector<bool>(m + 1, false));
    for (auto &it : adj_list)
        cin >> it;

    int rooms = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (adj_list[i][j] == '.' and !vis[i][j])
            {
                rooms++;
                bfs(i, j);
            }
        }
    }
    cout << rooms << endl;
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
5 8
########
#..#...#
####.#.#
#..#...#
########

Output:
3

https://cses.fi/problemset/task/1192
*/