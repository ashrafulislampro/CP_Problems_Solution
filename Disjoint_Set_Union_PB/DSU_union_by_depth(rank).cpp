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
const ll inf = (ll)1e18;
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

// Disjoint Sets Union with depth/Rank
int par[N], depth[N];

// create a new set that contain of element 'v'
void make_set(int v)
{
    par[v] = v;
    depth[v] = 0;
}

// return the leader of the set
int find_set(int v)
{
    if (v == par[v])
    {
        return v;
    }
    return par[v] = find_set(par[v]);
}

// join to component and select one leader
void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);

    // if the two component have one leader then return the program.
    if (a == b)
    {
        return;
    }

    // if the two components are different then come to here
    //  we can assume that 'a' component have the largest depth. Otherwise we can swap(a, b) component with each other.
    if (depth[a] < depth[b])
    {
        swap(a, b);
    }
    par[b] = a;

    // if two components depth level are equal, we will be increased the depth level 1;
    if (depth[a] == depth[b])
    {
        depth[a] += 1;
    }
}

void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37