#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int rem = n % 10;

    if (rem >= 5)
    {
        cout << 100 - (n-rem+10) << endl;
    }
    else
    {
        cout << 100 - (n-rem) << endl;
    }
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