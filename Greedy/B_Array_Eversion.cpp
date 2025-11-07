#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, min_ev = 0, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    int min_v = *min_element(v.begin(), v.end());
    int max_v = *max_element(v.begin(), v.end());
    if (min_v == max_v)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == max_v)
            break;
        if (v[i] > min_ev)
        {
            min_ev = v[i];
            cnt++;
        }
    }

    cout << cnt << endl;
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