#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n, b, d;
    cin >> n >> b >> d;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    ll sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= b)
        {
            sum += v[i];
        }
        if (sum > d)
        {
            sum = 0;
            ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}