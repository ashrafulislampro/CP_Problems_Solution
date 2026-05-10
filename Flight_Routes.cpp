#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;
int k;
void dijkstra(int s, vector<int> &d, vector<int> &p)
{
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);

    d[s] = 0;
    using pii = pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});

    vector<int> cnt(n + 1, 0);
    vector<int> dist_of_n;

    while (!q.empty())
    {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();

        if (v == n)
        {
            dist_of_n.push_back(d_v);
        }
        cnt[v] += 1;
        if (dist_of_n.size() >= k)
        {
            break;
        }
        if (cnt.size() > k)
            continue;

        for (auto edge : adj[v])
        {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to])
            {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
        }
    }
}