#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    bool ok = false;
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] > 0 && ok != true)
            ok = true;
    }
    if (!ok)
    {
        cout << 0 << endl;
        return;
    }

    if (v[k] > 0)
    {
        for (int i = k; i <= n; i++)
        {
            if (v[i] < v[k])
            {
                cout << i - 1 << endl;
                return;
            }
        }
        cout << n << endl;
    }
    else
    {
        for (int i = k; i >= 1; i--)
        {
            if (v[i] > 0)
            {
                cout << i << endl;
                return;
            }
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