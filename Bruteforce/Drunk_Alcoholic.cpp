#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int pos = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            pos += 3;
        else
            pos--;
    }
    cout << pos << endl;
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