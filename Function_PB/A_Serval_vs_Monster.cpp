#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, cnt = 0;
    cin >> n >> m;

    while (n > 0)
    {
        cnt++;
        n -= m;
    }
    cout << cnt << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}