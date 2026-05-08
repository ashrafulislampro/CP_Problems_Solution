#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x)
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

map<char, int> mp = {{'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6}, {'g', 7}, {'h', 8}};
// knight moves
vector<pair<int, int>> pr = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}, {1, -2}, {-1, -2}};

bool isValid(int sr, int sc)
{
    if (sr < 1 || sr > 8 || sc < 1 || sc > 8)
        return false;
    return true;
}
void solve()
{
    string srt, ed;
    cin >> srt >> ed;

    pair<int, int> start, end;
    start.ft = mp[srt[0]];
    start.sd = srt[1] - '0';

    end.ft = mp[ed[0]];
    end.sd = ed[1] - '0';

    // bfs for knight movement or the shortest path from the start to end
    vector<vector<bool>> vis(9, vector<bool>(9, false));    
    vector<vector<int>> level(9, vector<int>(9, 0));

    queue<pair<int, int>> q;
    q.push(start);
    vis[start.ft][start.sd] = true;
    level[start.ft][start.sd] = 0;
    bool flg = true;

    while (!q.empty() && flg)
    {
        pair<int, int> par = q.front();
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int si = par.ft + pr[i].ft;
            int sj = par.sd + pr[i].sd;
            if (isValid(si, sj) and !vis[si][sj])
            {
                q.push({si, sj});
                vis[si][sj] = true;
                level[si][sj] = level[par.ft][par.sd] + 1;
                if (end.ft == si and end.sd == sj)
                {
                    flg = false;
                    break;
                }
            }
        }
    }
    cout << level[end.ft][end.sd] << endl;
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Input:
3
a1 h8
a1 c2
h8 c3

Output:
6
1
4

https://www.spoj.com/problems/NAKANJ/en/
*/