#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;

    ll mx = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            ll sum = 0;

            for (int k = i; k <= j; k++)
            {

                sum += v[k];
            }
            mx = max(mx, sum);
        }
    }
    cout << mx << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}