#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    int cnt = 0;

  
    for (auto x : v)
    {     

        if (x >= l && x <= r && k - x >= 0)
        {
            cnt++;
            k -= x;
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