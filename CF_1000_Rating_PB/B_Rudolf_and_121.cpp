
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] < 0)
        {
            cout << "NO\n";
            return;
        }

        ll op = a[i];

        a[i] -= op;
        a[i + 1] -= 2 * op;
        a[i + 2] -= op;
    }

    if (a[n - 1] != 0 || a[n - 2] != 0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
