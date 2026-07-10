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
#define pll pair<ll, ll>

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stack<int> st_m, st_b, st_t;
    for (int i = n - 1; i >= 0; i--)
    {
        st_m.push(arr[i]);
    }
    while (!st_m.empty())
    {
        int val = st_m.top();
        int len = st_m.sz();
        st_m.pop();
        if (len <= x)
        {
            st_b.push(val);
        }
        else
        {
            st_t.push(val);
        }
    }

    while (!st_t.empty())
    {
        int val = st_t.top();
        st_t.pop();
        st_m.push(val);
    }

    while (!st_b.empty())
    {
        int val = st_b.top();
        st_b.pop();
        st_m.push(val);
    }

    while (!st_m.empty())
    {
        int val = st_m.top();
        st_m.pop();
        cout << val << " ";
    }
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37