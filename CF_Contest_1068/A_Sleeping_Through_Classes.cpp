#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, tmp;
    cin >> n >> k;
    string str;
    cin >> str;
    int ans = 0;
    bool isOk = false;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            isOk = true;
            tmp = k;
            continue;
        }
        if (isOk && tmp--)
            continue;
        isOk = false;
        ans++;
    }
    cout << ans << endl;
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