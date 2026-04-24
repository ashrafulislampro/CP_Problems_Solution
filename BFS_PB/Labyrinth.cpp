#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ft first
#define sd second
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
vector<vector<bool>> isVisit;
vector<vector<char>> usingOparetion;
pair<int, int> pos_a, pos_b;
vector<pair<int, int>> pr = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}}; // "LRUD"
string op = "LRUD";
bool isOk(int sr, int sc)
{
    if (sr < 0 || sr >= row || sc < 0 || sc >= col)
        return false;
    return true;
}
void BFS()
{
    queue<pair<int, int>> q;
    q.push(pos_a);
    isVisit[pos_a.ft][pos_a.sd] = true;
    while (!q.empty())
    {
        pair<int, int> node = q.front();
        int x = node.ft;
        int y = node.sd;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int si = x + pr[i].ft;
            int sj = y + pr[i].sd;
            if (isOk(si, sj) && arr[si][sj] != '#' && !isVisit[si][sj])
            {
                q.push({si, sj});
                isVisit[si][sj] = true;
                usingOparetion[si][sj] = op[i];
            }
        }
    }
}
void solve()
{
    cin >> row >> col;
    arr.resize(row);
    isVisit.resize(row, vector<bool>(col, false));
    usingOparetion.resize(row, vector<char>(col, 'X'));
    for (auto &it : arr)
        cin >> it;

    // Find out Position of A and B
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 'A')
            {
                pos_a = {i, j};
            }
            if (arr[i][j] == 'B')
            {
                pos_b = {i, j};
            }
        }
    }

    BFS();
    if (!isVisit[pos_b.ft][pos_b.sd])
    {
        cout << "NO" << endl;
        return;
    }
    string path;
    while (pos_b != pos_a)
    {
        char ch = usingOparetion[pos_b.ft][pos_b.sd];
        path.push_back(ch);
        if (ch == 'L') // go to reverse way
            pos_b.sd++;
        else if (ch == 'R')
            pos_b.sd--;
        else if (ch == 'U')
            pos_b.ft++;
        else
            pos_b.ft--;
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