#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            s += 'x';
        }
        else
        {
            s += 'o';
        }
    }
    cout << s << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}