#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++)
    {
        sum += v[i];
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