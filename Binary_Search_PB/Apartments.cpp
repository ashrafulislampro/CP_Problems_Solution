#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, m, k, x, i;
    cin >> n >> m >> k;
    vector<ll> A(n);
    for (auto &x : A)
        cin >> x;
    multiset<ll> B;
    
    for (i = 0; i < m; i++)
    {
        cin >> x;
        B.insert(x);
    }
    sort(A.begin(), A.end());

    ll ans = 0;
    for (i = 0; i < n; i++)
    {
        auto it = B.lower_bound(A[i] - k);         
        if (it != B.end() && *it <= A[i] + k)
        {
            ans++;
            B.erase(it);
        }
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    solve();
    return 0;
}