#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll INF = (ll)1e18;

struct Edge
{
    int u, v;
    ll w;

    Edge(int _u, int _v, ll _w)
    {
        u = _u;
        v = _v;
        w = _w;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;

    while (cin >> n >> m >> q)
    {
        if (n == 0 && m == 0 && q == 0)
            break;

        vector<Edge> edges;
        vector<vector<int>> graph(n);

        // input edges
        for (int i = 0; i < m; i++)
        {
            int u, v;
            ll w;
            cin >> u >> v >> w;
            edges.push_back(Edge(u, v, w));
            graph[u].push_back(v);
        }

        vector<pair<int, int>> queries(q);

        for (int i = 0; i < q; i++)
        {
            cin >> queries[i].first >> queries[i].second;
        }

        // group queries by source
        map<int, vector<pair<int, int>>> grouped;

        for (int i = 0; i < q; i++)
        {
            int src = queries[i].first;

            grouped[src].push_back({queries[i].second, i});
        }

        vector<string> answer(q);

        // Bellman Ford per unique source
        for (auto &it : grouped)
        {
            int src = it.first;

            vector<ll> dist(n, INF);

            dist[src] = 0;

            // Bellman Ford
            for (int i = 0; i < n - 1; i++)
            {
                bool updated = false;

                for (const Edge &ed : edges)
                {
                    if (dist[ed.u] == INF)
                        continue;

                    if (dist[ed.v] > dist[ed.u] + ed.w)
                    {
                        dist[ed.v] = dist[ed.u] + ed.w;
                        updated = true;
                    }
                }

                if (!updated)
                    break;
            }

            // detect nodes affected by negative cycle
            vector<bool> neg(n, false);           

            queue<int> qu;

            for (const Edge &ed : edges)
            {
                if (dist[ed.u] == INF)
                    continue;

                if (dist[ed.v] > dist[ed.u] + ed.w)
                {
                    if (!neg[ed.v])
                    {
                        neg[ed.v] = true;
                        qu.push(ed.v);
                    }
                }
            }
            // propagate negative cycle effect
            while (!qu.empty())
            {
                int u = qu.front();
                qu.pop();

                for (int v : graph[u])
                {
                    if (!neg[v])
                    {
                        neg[v] = true;
                        qu.push(v);
                    }
                }
            }

            // answer queries
            for (auto &qq : it.second)
            {
                int dest = qq.first;
                int idx = qq.second;

                if (dist[dest] == INF)
                {
                    answer[idx] = "Impossible";
                }
                else if (neg[dest])
                {
                    answer[idx] = "-Infinity";
                }
                else
                {
                    answer[idx] = to_string(dist[dest]);
                }
            }
        }

        // print answers in original order
        for (int i = 0; i < q; i++)
        {
            cout << answer[i] << '\n';
        }

        cout << '\n';
    }

    return 0;
}