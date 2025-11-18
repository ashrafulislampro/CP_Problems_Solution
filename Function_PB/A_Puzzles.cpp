#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    int mn_v = INT_MAX, mn_v2 = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        int l = *min_element(v.begin() + i, v.begin() + i + n);
        int h = *max_element(v.begin() + i, v.begin() + i + n);

        if (h - l < mn_v)
        {
            mn_v = h - l;
        }
    }

    cout << mn_v << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}