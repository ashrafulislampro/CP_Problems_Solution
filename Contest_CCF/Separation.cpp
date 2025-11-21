#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    auto pos = find(v.begin(), v.end(), x);

    if (v[0] > x || v[n - 1] < x || pos != v.end())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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