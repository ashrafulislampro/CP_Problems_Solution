#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, zero_cnt = 0, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char c;
        cin >> c;
        if (c == '0' && zero_cnt < 1)
        {
            zero_cnt = 1;
        }
        if (c == '1' && zero_cnt)
        {
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