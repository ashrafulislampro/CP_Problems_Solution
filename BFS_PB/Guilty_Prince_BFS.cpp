#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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
vector<vector<int>> isVisit;
vector<pair<int, int>> pr = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
bool isOk(int sr, int sc)
{
    if (sr < 0 || sr >= row || sc < 0 || sc >= col)
        return false;
    return true;
}
void BFS(pair<int, int> &starting)
{

    queue<pair<int, int>> q;
    q.push(starting);

    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();
        int r = node.first, c = node.second;
        if (isVisit[r][c])
            continue;

        isVisit[r][c] = 1;

        for (int i = 0; i < 4; i++)
        {
            int c_row = r + pr[i].first;
            int c_col = c + pr[i].second;

            if (isOk(c_row, c_col) and arr[c_row][c_col] != '#')
                q.push({c_row, c_col});
        }
    }
}
void solve()
{
    cin >> col >> row;
    arr.resize(row);
    isVisit.resize(row, vector<int>(col, 0));
    for (auto &it : arr)
        cin >> it;

    pair<int, int> starting;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == '@')
            {
                starting = {i, j};
                break;
            }
        }
    }

    BFS(starting);

    int count = 0;
    for (auto it1 : isVisit)
        for (auto &it2 : it1)
        {
            if (it2 == 1)
                count++;
        }

    cout << count << "\n";

    arr.clear();
    isVisit.clear();
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

1
11 6
..#..#..#..
..#..#..#..
..#..#..###
..#..#..#@.
..#..#..#..
..#..#..#..

*/