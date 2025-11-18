#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, cnt = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = n - 1; i > 0; i--)
    {
        if (str[i] != str[i - 1])
        {
            str[i - 1] = str[i];
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