#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n), f(n + 1);

    for (auto &x : v)
    {
        cin >> x;
    }
    for (int i = 1; i < n; i++)
    {        
        f[v[i]]++;
    }
    f[v[0]] = 0;
   
    sort(f.begin(), f.end());
    int dis = 1;
    for (auto s : f)
    {
        if (k >= s)
            k -= s;
        else
            dis++;
    }
    cout << dis << endl;
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
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37