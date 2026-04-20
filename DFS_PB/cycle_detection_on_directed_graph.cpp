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

ordered_set<int> ost;
vector<vector<int>> arr;
vector<bool> isVisited;
vector<bool> currVisited;
vector<int> lastVisited;
bool flg = false;
void dfs(int node)
{
    isVisited[node] = true, currVisited[node] = true;

    cerr << node << " ";
    lastVisited.push_back(node);
    for (auto child : arr[node])
    {
        if (currVisited[child])
        {
            flg = true;
            cout << node << "-> " << child << endl;
            cout << "There is a cycle" << endl;
        }
        if (!isVisited[child])
            dfs(child);
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    arr.resize(node + 1);
    isVisited.resize(node + 1, false);

    for (int i = 1; i <= edge; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        // arr[b].push_back(a);
    }

    for (int i = 1; i <= 3; i++)
    {
        if (!isVisited[i])
        {
            dfs(i);
            cerr << endl;
            if (flg)
                break;
            else
            {
                // clear currentl visited node
                for (auto &it : lastVisited)
                {
                    currVisited[it] = false;
                }
                lastVisited.clear();
            }
        }
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37