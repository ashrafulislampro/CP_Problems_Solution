#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void dfs(ll node, ll par, vll tree[], set<ll> &st)
{
    st.insert(node);
    for (auto &child : tree[node])
        if (child != par)
            dfs(child, node, tree, st);
}
bool check(ll node, ll k, vll tree[])
{
    for (auto &child : tree[node])
    {
        set<ll> st;
        dfs(child, node, tree, st);
        for (auto &it : st)
            if (k - it >= 1 && !st.count(k - it))
                return true;
    }
    return false;
}
void solve()
{
    ll n, u, v;
    cin >> n;
    vll tree[n + 1];
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> u >> v;
        tree[u].pb(v);
        tree[v].pb(u);
    }

    if (n % 2 == 0)
    {
        cout << n + 1 << "\n";
        return;
    }

    // n +1 dile, mid mara khabe
    // n dile last mara khabe
    // n+2 dile first mara khabe

    if (check((n + 1) / 2, n + 1, tree))
        cout << n + 1 << "\n";
    else if (check(n, n, tree))
        cout << n << "\n";
    else
        cout << n + 2 << "\n";
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
// https://codeforces.com/contest/2283/problem/D