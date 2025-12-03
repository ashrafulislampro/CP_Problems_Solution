#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, m;
    cin >> n >> m;
    set<ll> row, col;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        row.insert(x);
        col.insert(y);

        cout << (n - row.size()) * (n - col.size()) << " ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}