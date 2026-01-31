#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    vector<ll> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    vector<ll> B;
    B.push_back(A[n - 1]);
    A.pop_back();

    ll ans = 0;

    while (A.size() > 0)
    {
        if ((B.back() % 2 == 0 and A.back() % 2 == 0) or (A.back() % 2 == 1 and B.back() % 2 == 1))
        {
            ans++;
            ll a = B.back();
            ll b = A.back();

            ll res = (a % 2) * (b % 2);
            B.pop_back();
            A.pop_back();
            B.push_back(res);
        }
        else
        {
            ll val = A.back();
            B.push_back(val);
            A.pop_back();
        }
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}