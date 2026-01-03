#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void pd(int n)
{
    if (n == 0)
        return;

    int lastdigit = n % 10;
    cerr << n << endl;
    pd(n / 10);
    cout << lastdigit << endl;
}
void solve()
{
    int num = 5678;
    pd(num);
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}