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
vector<string> arr;
vector<vector<bool>> vis;
vector<vector<char>> usingWhichOp;
vector<pair<int, int>> pr = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
string op = "LRUD";

bool isOk(int sr, int sc)
{
    if (sr < 0 || sr >= row || sc < 0 || sc >= col)
        return false;
    return true;
}
void BFS(pair<int, int> &start)
{
    queue<pair<int, int>> q;
    q.push(start);
    vis[start.x][start.y] = true;
    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();
        int sr_i = node.x;
        int sr_j = node.y;
        for (int i = 0; i < 4; i++)
        {
            int cd_i = sr_i + pr[i].x;
            int cd_j = sr_j + pr[i].y;

            if (isOk(cd_i, cd_j) && arr[cd_i][cd_j] != '#' && !vis[cd_i][cd_j])
            {
                q.push({cd_i, cd_j});
                usingWhichOp[cd_i][cd_j] = op[i];
                vis[cd_i][cd_j] = true;
            }
        }
    }
}
void solve()
{
    cin >> row >> col;
    arr.resize(row);
    vis.resize(row, vector<bool>(col, false));
    usingWhichOp.resize(row, vector<char>(col, 'a'));
    for (auto &it : arr)
        cin >> it;

    pair<int, int> start, end;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 'A')
            {
                start = {i, j};
            }
            if (arr[i][j] == 'B')
            {
                end = {i, j};
            }
        }
    }
    BFS(start);

    if (!vis[end.x][end.y])
    {
        cout << "NO" << endl;
        return;
    }
    string path;
    while (start != end)
    {
        char ch = usingWhichOp[end.x][end.y];
        path.push_back(ch);
        if (ch == 'L')
            end.y++;
        else if (ch == 'R')
            end.y--;
        else if (ch == 'U')
            end.x++;
        else
            end.x--;
    }
    cout << "YES" << endl;
    cout << path.size() << endl;
    reverse(path.begin(), path.end());
    cout << path << endl;
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
#.A#...#
#.##.#B#
#......#
########


Output:

YES
9
LDDRRRRRU

*/

// https://cses.fi/problemset/task/1193