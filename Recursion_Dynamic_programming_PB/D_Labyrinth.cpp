#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dir[1001][1001];

// reverse way
string getPath(int x, int y, int Ax, int Ay)
{
    if (x == Ax and y == Ay)
        return "";
    if (dir[x][y] == 0)
    {
        string path = getPath(x, y - 1, Ax, Ay);
        path.push_back('R');
        return path;
    }
    if (dir[x][y] == 1)
    {
        string path = getPath(x, y + 1, Ax, Ay);
        path.push_back('L');
        return path;
    }
    if (dir[x][y] == 2)
    {
        string path = getPath(x - 1, y, Ax, Ay);
        path.push_back('D');
        return path;
    }
    if (dir[x][y] == 3)
    {
        string path = getPath(x + 1, y, Ax, Ay);
        path.push_back('U');
        return path;
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    char mtx[n][m];
    pair<int, int> A, B;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mtx[i][j];
            if (mtx[i][j] == 'A')
                A = {i, j};
            if (mtx[i][j] == 'B')
                B = {i, j};
        }
    }

    int vis[n][m], cost[n][m];
    memset(vis, 0, sizeof(vis));
    queue<pair<int, int>> q;
    q.push(A);
    vis[A.first][A.second] = 1;
    cost[A.first][A.second] = 0;
    while (q.size() > 0)
    {
        pair<int, int> f = q.front();
        int x = f.first, y = f.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x_ = x + dx[i];
            int y_ = y + dy[i];
            if (x_ < 0 or x_ >= n or y_ < 0 or y_ >= m)
                continue;
            if (vis[x_][y_] == 1 or mtx[x_][y_] == '#')
                continue;

            vis[x_][y_] = 1;
            cost[x_][y_] = cost[x][y] + 1;
            q.push({x_, y_});
            dir[x_][y_] = i;
        }
    }
    if (vis[B.first][B.second] == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl
             << cost[B.first][B.second] << endl;
        // Forward way
        // cout << getPath(A.first, A.second, B.first, B.second) << endl;
        //  Reverse way
        cout << getPath(B.first, B.second, A.first, A.second) << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}