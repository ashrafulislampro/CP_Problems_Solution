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
    vector<int> A(n), B(n);
    for (auto &x : A)
        cin >> x;
    for (auto &x : B)
        cin >> x;

    int ans = 0, hi = 3000, lo = 0, mid;
    while (hi >= lo)
    {
        mid = lo + (hi - lo) / 2;
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            t += max(0, A[i] * mid - B[i]);
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