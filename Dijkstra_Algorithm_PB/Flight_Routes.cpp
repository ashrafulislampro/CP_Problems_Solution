#include <bits/stdc++.h>
using namespace std;

#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)2e5 + 5;
const ll mod = (ll)1e9 + 7;

// const int INF = 1000000000;
#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void dijkstra()
{
    ll n, m, k, a, b, c;
    cin >> n >> m >> k;
    vector<pair<ll, ll>> adj[N];
    vector<ll> d(n + 5, inf);

    for (ll i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
    }

    ll s = 1;
    d[s] = 0;
    using pii = pair<ll, ll>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});

    vector<ll> cnt(n + 1, 0);
    vector<ll> dist_of_n;

    while (!q.empty())
    {
        ll v = q.top().second;
        ll d_v = q.top().first;
        q.pop();

        if (v == n)
        {
            dist_of_n.push_back(d_v);
        }

        cnt[v] += 1;

        if ((int)dist_of_n.size() >= (int)k)
            break;

        if (cnt[v] > k)
            continue;

        for (auto edge : adj[v])
        {
            ll to = edge.second;
            ll len = edge.first;

            if (d_v + len < d[to])
                d[to] = d_v + len;

            q.push({d_v + len, to}); // outside the if
        }
    }

    for (auto &it : dist_of_n)
    {
        cout << it << " ";
    }
}

int main()
{
    ASHRAFUL
    dijkstra();
    return 0;
}



/*
Sample Input:
4 6 3
1 2 1
1 3 3
2 3 2
2 4 6
3 2 8
3 4 1

Sample Output:
4 4 7

https://cses.fi/problemset/task/1196
*/
