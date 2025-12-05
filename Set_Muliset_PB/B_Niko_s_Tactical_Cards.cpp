#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n), vec(n);
    for (auto &x : v)
        cin >> x;
    for (auto &x : vec)
        cin >> x;

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll tmp = sum, tmp2 = sum;
        tmp = tmp - v[i];
        tmp2 = vec[i] - tmp2;
        ll res = max(tmp, tmp2);
        // if (res > sum)
            sum += res;
    }
    cout << sum << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}