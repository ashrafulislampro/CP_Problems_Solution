#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(4);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    int max_val = v[3];
    int sum = v[0] + v[1] + v[2];

    if (max_val > sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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