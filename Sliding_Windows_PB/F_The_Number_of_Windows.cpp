#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> v(n), arr(q);

    for (auto &x : v)
        cin >> x;
    for (auto &x : arr)
        cin >> x;

    for (int i = 0; i < q; i++)
    {
        ll ans = 0, sum = 0;
        queue<int> qr;
        for (int j = 0; j < n; j++)
        {
            if (sum + v[j] <= arr[i])
            {
                sum += v[j];
                qr.push(v[j]);
            }
            else
            {
                sum += v[j];
                qr.push(v[j]);
                while (sum > arr[i])
                {
                    int val = qr.front();
                    qr.pop();
                    sum -= val;
                }
            }
            ans += qr.size();
        }
        cout << ans << endl;
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37