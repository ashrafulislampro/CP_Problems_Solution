#pragma GCC optimize("Ofast")
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
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

ll par[N], sz_f[N], mn[N], mx[N];
void make_set(int v)
{
    par[v] = v;
    sz_f[v] = 1;
    mn[v] = v;
    mx[v] = v;
}
ll find_set(ll v)
{
    if (v == par[v])
        return v;
    return par[v] = find_set(par[v]);
}

void union_set(ll a, ll b)
{
    a = find_set(a);
    b = find_set(b);

    if (a == b)
        return;

    if (a < b)
    {
        swap(a, b);
    }
    par[b] = a;
    sz_f[a] += sz_f[b];
    mn[a] = min(mn[a], mn[b]);
    mx[a] = max(mx[a], mx[b]);
}
void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        make_set(i);
    }
    while (m--)
    {
        string ss;
        cin >> ss;
        if (ss == "union")
        {
            cin >> a >> b;
            union_set(a, b);
        }
        else
        {
            cin >> a;
            a = find_set(a);
            cout << mn[a] << " " << mx[a] << " " << sz_f[a] << endl;
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
5 11
union 1 2
get 3
get 2
union 2 3
get 2
union 1 3
get 5
union 4 5
get 5
union 4 1
get 5

Sample Output:
3 3 1
1 2 2
1 3 3
5 5 1
4 5 2
1 5 5


https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/B
*/