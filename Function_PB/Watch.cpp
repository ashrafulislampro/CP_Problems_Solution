#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h, m, s;
    cin >> n;

    int rem = n % (60 * 60);
    h = n / (60 * 60);

    m = rem / 60;
    rem = rem % 60;
    s = rem;

    cout << h << ":" << m << ":" << s << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}