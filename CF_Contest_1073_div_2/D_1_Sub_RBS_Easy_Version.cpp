#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
bool ache(string& a, ll n)
{
    for (int i = 0; i < n / 2 - 1; i++) {
        if (a[i] == ')')
            return 1;
    }
    return 0;
}
void Solve()
{
    ll n;
    cin >> n;
    string a;
    cin >> a;
    if (ache(a, n))
        cout << n - 2 << '\n';
    else
        cout << "-1\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        Solve();
    }
    return 0;
}

