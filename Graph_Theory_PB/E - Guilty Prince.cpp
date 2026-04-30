#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define x first
#define y second
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
int row, col;
vector<pair<int, int>> pr = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool isValid(int sr, int sc)
{
    if (sr < 0 || sr >= row || sc < 0 || sc >= col)
        return false;
    return true;
}
void solve()
{

    cin >> col >> row;
    vector<string> arr(row);
    vector<vector<bool>> vis(row, vector<bool>(col, false));
    for (auto &it : arr)
        cin >> it;

    // find out initial starting position
    pair<int, int> start;
    bool flg = true;
    for (int i = 0; i < row and flg; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == '@')
            {
                start = {i, j};
                flg = false;
                break;
            }
        }
    }

    // BFS
    queue<pair<int, int>> q;
    q.push(start);
    vis[start.x][start.y] = true;
    int cnt = 1;
    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();
        int pr_i = node.x;
        int pr_j = node.y;
        for (int i = 0; i < 4; i++)
        {
            int si = pr_i + pr[i].x;
            int sj = pr_j + pr[i].y;
            if (isValid(si, sj) and arr[si][sj] != '#' and !vis[si][sj])
            {
                q.push({si, sj});
                vis[si][sj] = true;
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37


/*
input:
4
6 9
....#.
.....#
......
......
......
......
......
#@...#
.#..#.
11 9
.#.........
.#.#######.
.#.#.....#.
.#.#.###.#.
.#.#..@#.#.
.#.#####.#.
.#.......#.
.#########.
...........
11 6
..#..#..#..
..#..#..#..
..#..#..###
..#..#..#@.
..#..#..#..
..#..#..#..
7 7
..#.#..
..#.#..
###.###
...@...
###.###
..#.#..
..#.#..


output:
Case 1: 45
Case 2: 59
Case 3: 6
Case 4: 13

*/

// https://lightoj.com/problem/guilty-prince