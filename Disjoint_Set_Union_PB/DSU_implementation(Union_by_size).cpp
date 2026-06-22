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

// Disjoint Set Union Implementation
int parent[N], sz_f[N];

void make(int i)
{
    parent[i] = i;
    sz_f[i] = 1;
}

int find(int i)
{
    if (parent[i] == i)
        return i;
    return parent[i] = find(parent[i]);
}

void join(int a, int b)
{
    int par_a = find(a);
    int par_b = find(b);

    if (par_a == par_b)
    {
        // same component e thakle alada connect korar dorkar nai
        return;
    }

    // different component hoile ekhane ashbe
    if (sz_f[par_b] >= sz_f[par_a])
    {
        swap(par_a, par_b);
    }
    parent[par_b] = par_a;
    sz_f[par_a] += sz_f[par_b];

    // parent[par_a] = par_b;
}

void solve()
{
    ll u, v, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;

    for (i = 1; i <= n; i++)
    {
        make(i);
    }
    string ss;
    for (i = 1; i <= m; i++)
    {
        cin >> ss >> u >> v;
        if (ss == "union")
            join(u, v);
        else
        {
            if (find(u) == find(v))
                cout << "YES\n";
            else
                cout << "NO\n";
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

/*
Sample Input:
4 4
union 1 2
union 1 3
get 1 4
get 2 3

Sample Output:
NO
YES


https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/A
*/

// Documentation
// https://cp-algorithms.com/data_structures/disjoint_set_union.html