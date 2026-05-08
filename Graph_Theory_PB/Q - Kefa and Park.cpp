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

vector<vector<int>> adj_list;
vector<int> arr;
int n, m, a, b, rest_cnt = 0;

// Possible leaf node count where can Kefa go..
void dfs(int src, int parent, int cat)
{
    if(arr[src])cat++;
    else cat = 0;
    if(cat > m)return;
    bool isleaf = src != 1 and adj_list[src].size() == 1;
    if(isleaf)rest_cnt++;
    
    for(auto child: adj_list[src]){
        if(child != parent)
            dfs(child, src, cat);
    }
}
void solve()
{

    cin >> n >> m;
    adj_list.resize(n + 1);
    arr.resize(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 2; i <= n; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    // dfs
    dfs(1, -1, 0);
    cout << rest_cnt << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Input:
7 1
1 0 1 1 0 0 0
1 2
1 3
2 4
2 5
3 6
3 7

Output:
2

*/
// https://codeforces.com/contest/580/problem/C