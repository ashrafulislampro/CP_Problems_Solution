#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        ll sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];

            if (sum == w || sum * 2 == w)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}