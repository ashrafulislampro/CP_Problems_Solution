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

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

struct Edge
{
    int u, v, w;
    Edge(int uu, int vv, int ww)
    {
        u = uu;
        v = vv;
        w = ww;
    }
};

int n, caseNum = 1;

void solve()
{
    // n আমাদের গ্লোবাল বা মেইন থেকে পাস হচ্ছে, লুপ ভ্যারিয়েবল ডিক্লেয়ারেশন
    int i, j, k;
    vector<string> grid(n);
    for (i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    // নোড সংখ্যা: n rows (1 to n) + n cols (n+1 to 2*n) + 1 dummy source (0)
    int totalNodes = 2 * n + 1;
    vector<Edge> adj;

    // Difference Constraints System এর এজ তৈরি
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            int rowIdx = i + 1;
            int colIdx = n + j + 1;

            if (grid[i][j] == '0')
            {
                // R_i - C_j == 0  =>  R_i - C_j <= 0  এবং  C_j - R_i <= 0
                adj.pb(Edge(colIdx, rowIdx, 0));
                adj.pb(Edge(rowIdx, colIdx, 0));
            }
            else if (grid[i][j] == '+')
            {
                // R_i - C_j >= 1  =>  C_j - R_i <= -1
                adj.pb(Edge(rowIdx, colIdx, -1));
            }
            else if (grid[i][j] == '-')
            {
                // R_i - C_j <= -1
                adj.pb(Edge(colIdx, rowIdx, -1));
            }
        }
    }

    // সব নোডকে সোর্স (0) এর সাথে কানেক্ট করা যাতে ডিসকানেক্টেড গ্রাফেও সাইকেল ধরা পড়ে
    for (i = 1; i <= 2 * n; i++)
    {
        adj.pb(Edge(0, i, 0));
    }

    vector<int> dist(totalNodes, inf);
    dist[0] = 0;

    // Bellman Ford algorithm (V-1 বার রিল্যাক্সেশন)
    for (i = 0; i < totalNodes - 1; i++)
    {
        for (Edge ed : adj)
        {
            int from = ed.u;
            int to = ed.v;
            int cost = ed.w;

            if (dist[from] == inf)
                continue;
            if (dist[to] > dist[from] + cost)
            {
                dist[to] = dist[from] + cost;
            }
        }
    }

    // নেগেটিভ সাইকেল চেক করা
    bool hasNegativeCycle = false;
    for (Edge ed : adj)
    {
        int from = ed.u;
        int to = ed.v;
        int cost = ed.w;

        if (dist[from] == inf)
            continue;
        if (dist[to] > dist[from] + cost)
        {
            hasNegativeCycle = true;
            break;
        }
    }

    cout << "Case " << caseNum++ << ": ";
    if (hasNegativeCycle)
    {
        cout << "-1\n";
    }
    else
    {
        // সব ভ্যালুকে একসাথে নিয়ে মিডিয়ান (median) বের করে মিনিমাম কস্ট হিসেব করা
        vector<int> vals;
        for (i = 1; i <= 2*n; i++)
            vals.pb(dist[i]); // row values
       

        sort(vals.begin(), vals.end());
        int median = vals[vals.size() / 2];

        int ans = 0;
        for (int v : vals)
        {
            ans += abs(v - median);
        }
        cout << ans << "\n";
    }
}

int main()
{
    ASHRAFUL

    while (cin >> n && n != -1)
    {
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37


/*
Sample Input:
4
0+00
-+--
0+00
0+00
2
+0
00
-1

Sample Output:
Case 1: 3
Case 2: -1


https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2718
*/
