#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
            c1++;
        else if (a == 2)
            c2++;
        else
            c3++;
    }
    int mx = max(c1 + min(1, c2), c3 + min(1, c2));
    cout << n - mx << endl;
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
