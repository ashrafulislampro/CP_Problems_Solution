#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m;
    cin >> n >> m;

    if (n > m)
    {
        swap(n, m);
    }
    if ((n % 2 == 1 && m % 2 == 1) || (n % 2 == 1 && m == 2 * n))
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
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