#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << 0 << endl;
        return;
    }
    if (m == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        if (n - m > m)
        {
            cout << m << endl;
        }
        else
        {
            cout << n - m << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}