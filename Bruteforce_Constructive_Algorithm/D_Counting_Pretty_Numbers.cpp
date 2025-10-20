#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;

    int cnt = 0;
    for (int i = l; i <= r; i++)
    {
        string str = to_string(i);
        int len = str.size();
        if (str[len - 1] == '2' || str[len - 1] == '3' || str[len - 1] == '9')
            cnt++;
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