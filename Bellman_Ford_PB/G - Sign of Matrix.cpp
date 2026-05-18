#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int INF = 1e9;

struct Edge
{
    int u, v, w;

    Edge(int _u, int _v, int _w)
    {
        u = _u;
        v = _v;
        w = _w;
    }
};

int n, tc = 1;

void solve()
{
    vector<string> grid(n);

    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    vector<Edge> edges;

    /*
        Node mapping:

        0          -> dummy source
        1 ... n    -> rows
        n+1 ...2n  -> columns
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int row = i + 1;
            int col = n + j + 1;

            if (grid[i][j] == '0')
            {
                // Ri = Cj

                // Ri - Cj <= 0
                edges.push_back(Edge(col, row, 0));

                // Cj - Ri <= 0
                edges.push_back(Edge(row, col, 0));
            }

            else if (grid[i][j] == '+')
            {
                // Ri - Cj >= 1
                // Cj - Ri <= -1

                edges.push_back(Edge(row, col, -1));
            }

            else
            {
                // Ri - Cj <= -1

                edges.push_back(Edge(col, row, -1));
            }
        }
    }

    int totalNodes = 2 * n + 1;

    // dummy source
    for (int i = 1; i <= 2 * n; i++)
    {
        edges.push_back(Edge(0, i, 0));
    }

    vector<int> dist(totalNodes, INF);

    dist[0] = 0;

    // Bellman Ford
    for (int i = 0; i < totalNodes - 1; i++)
    {
        bool updated = false;

        for (auto ed : edges)
        {
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;

            if (dist[u] == INF)
                continue;

            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                updated = true;
            }
        }

        if (!updated)
            break;
    }

    // negative cycle detection
    bool bad = false;

    for (auto ed : edges)
    {
        int u = ed.u;
        int v = ed.v;
        int w = ed.w;

        if (dist[u] == INF)
            continue;

        if (dist[v] > dist[u] + w)
        {
            bad = true;
            break;
        }
    }

    cout << "Case " << tc++ << ": ";

    if (bad)
    {
        cout << -1 << '\n';
        return;
    }

    vector<int> vals;

    for (int i = 1; i <= 2 * n; i++)
    {
        vals.push_back(dist[i]);
    }

    sort(vals.begin(), vals.end());

    int median = vals[vals.size() / 2];

    int ans = 0;

    for (int v : vals)
    {
        ans += abs(v - median);
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (cin >> n && n != -1)
    {
        solve();
    }

    return 0;
}

