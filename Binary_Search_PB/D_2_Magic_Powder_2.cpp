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
    ll k;
    cin >> n;
    cin >> k;
    vector<ll> A(n), B(n);
    for (auto &x : A)
        cin >> x;
    for (auto &x : B)
        cin >> x;

    ll hi = 2e9, lo = 0, mid, ans = 0;
    while (hi >= lo)
    {
        ll t = 0;
        mid = lo + (hi - lo) / 2;

        for (int i = 0; i < n; i++)
        {
            t += max(0ll, A[i] * mid - B[i]);
            if (t > k)
                break;
        }

        if (t > k)
        {

            hi = mid - 1;
        }
        else
        {

            lo = mid + 1;
            ans = mid;
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