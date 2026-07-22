#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void Solve()
{
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    vector<int> s1(n, 0);
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            s1[i]++;
        }
        s1[i] += s1[i - 1];
    }
    while (m--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        l--, r--;
        int ele = s1[r] - s1[l];
        if (k >= (ele + 1) / 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Solve();
    }
    return 0;
}

// https://codeforces.com/contest/2244/problem/E
