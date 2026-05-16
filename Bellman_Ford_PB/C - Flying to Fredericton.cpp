#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()

using ll = long long;
const int inf = 1e9;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

// Ordered Set Declaration
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

// find_by_order(x) => return an iterator of k-th smallest element(0-based)
// order_of_key(x) => return a number of element less than x

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

struct Edge
{
    string u, v;
    int w;
    Edge(string uu, string vv, int ww)
    {
        u = uu;
        v = vv;
        w = ww;
    };
};
void solve()
{
    int c, i, j, k, m, n, o, x, y, z;

    vector<Edge> adj;
    map<pair<int, string>, int> dist;
    cin >> n;
    string a, b;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        pair<int, string> pr = {0, a};
        dist[pr] = inf;
    }
    cin >> m;
    for (i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        Edge ed(a, b, c);
        adj.pb(ed);
    }
    dist[{0, "Calgary"}] = 0;

    for (i = 1; i < n; i++)
    {

        for (Edge ed : adj)
        {
            string from = ed.u;
            string to = ed.v;
            int cost = ed.w;

            cerr << from << " = " << to << " == " << cost << endl;
        }
        cerr << endl;
    }
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
        cout << "Scenario #" << i << endl;
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Sample Input
2

4
Calgary
Winnipeg
Ottawa
Fredericton
6
Calgary Winnipeg 125
Calgary Ottawa 300
Winnipeg Fredericton 325
Winnipeg Ottawa 100
Calgary Fredericton 875
Ottawa Fredericton 175
3 2 1 0

3
Calgary
Montreal
Fredericton
2
Calgary Montreal 300
Montreal Fredericton 325
1 0



Sample Output
Scenario #1
Total cost of flight(s) is $400
Total cost of flight(s) is $450
Total cost of flight(s) is $875
Scenario #2
No satisfactory flights


*/