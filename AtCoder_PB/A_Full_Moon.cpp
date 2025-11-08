#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n, m, p, cnt = 0;
    cin >> n >> m >> p;

    while (m <= n)
    {
        cnt++;
        m += p;
    }
    cout << cnt << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int T = 1;
    // cin >> T;
    // while (T--)
    solve();
    return 0;
}