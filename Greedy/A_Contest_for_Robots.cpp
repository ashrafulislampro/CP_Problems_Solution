#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> r(n), b(n);
    for (auto &x : r)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    int cnt_r = 0, cnt_b = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (r[i] == b[i])
            continue;
        if (r[i] == 1)
            cnt_r++;
        if (b[i] == 1)
            cnt_b++;
    }
    cnt_b++;
    if (cnt_r == 0)
        ans = -1;
    else
        ans = (cnt_b + cnt_r - 1) / cnt_r;

    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}