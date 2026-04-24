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
vector<vector<char>> usingWhichOp;
vector<vector<bool>> isVisit;
pair<int, int> starting, dest;
vector<pair<int, int>> pr = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
// LRUD
bool isOk(int sr, int sc)
{
    if (sr < 0 || sr >= row || sc < 0 || sc >= col)
        return false;
    return true;
}
void BFS()
{
    queue<pair<int, int>> q;
    q.push(starting);
    isVisit[starting.x][starting.y] = true;
    while (!q.empty())
    {
        pair<int, int> node = q.front();
        int si = node.x;
        int sj = node.y;
        q.pop();
        string op = "LRUD";
        for (int i = 0; i < 4; i++)
        {
            int s_i = si + pr[i].x;
            int s_j = sj + pr[i].y;
            if (!isOk(s_i, s_j) || arr[s_i][s_j] == '#')
                continue;

            if (!isVisit[s_i][s_j])
            {
                isVisit[s_i][s_j] = true;
                q.push({s_i, s_j});
                usingWhichOp[s_i][s_j] = op[i];
            }
        }
    }
}
void solve()
{
    cin >> row >> col;
    arr.resize(row);
    isVisit.resize(row, vector<bool>(col, false));
    usingWhichOp.resize(row, vector<char>(col));

    for (auto &it : arr)
        cin >> it;

    bool flg = true;
    for (int i = 0; i < row and flg; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 'A')
            {
                starting = {i, j};
                flg = false;
                break;
            }
        }
    }

    BFS();

    flg = true;
    for (int i = 0; i < row and flg; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 'B')
            {
                dest = {i, j};
                flg = false;
                break;
            }
        }
    }
    if (!isVisit[dest.x][dest.y])
    {
        cout << "NO" << endl;
        return;
    }

    string path;
    while (dest != starting)
    {
        char ch = usingWhichOp[dest.x][dest.y];
        path.push_back(ch);

        if (ch == 'L') // go to right (reverse)
            dest.y++;
        else if (ch == 'R')
            dest.y--;
        else if (ch == 'U')
            dest.x++;
        else
            dest.x--;
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
Test Case:
5 8
########
#.A#...#
#.##.#B#
#......#
########

Ans:
YES
9
LDDRRRRRU


*/